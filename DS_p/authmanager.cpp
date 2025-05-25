#include "authmanager.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

using namespace std;

User AuthManager::currentuser;

void AuthManager::showCustomMessageBox(QWidget* parent, QMessageBox::Icon icon, const QString& title, const QString& message) {
    QMessageBox msgBox(parent);
    msgBox.setIcon(icon);
    msgBox.setWindowTitle(title);
    msgBox.setText(message);
    msgBox.setStyleSheet(
        "QMessageBox { background-color: black; color: white; }"
        "QLabel { color: white; }"
        "QPushButton { background-color: gray; color: white; padding: 5px; border-radius: 5px; }"
        "QPushButton:hover { background-color: #444444; }"
        );
    msgBox.exec();
}

AuthManager::AuthManager() {
    loadData();
}

bool AuthManager::isValidEmail(const QString& email) {
    if (email.contains(' ')) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Invalid Email", "Email cannot contain spaces!");
        return false;
    }
    int atCount = email.count('@');
    if (atCount != 1) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Invalid Email", "Email must contain exactly one '@'!");
        return false;
    }
    int atPos = email.indexOf('@');
    QString domain = email.mid(atPos + 1);
    if (!domain.contains('.')) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Invalid Email", "Email must have a domain (e.g., .com, .org)!");
        return false;
    }
    QString localPart = email.mid(0, atPos);
    if (localPart.isEmpty()) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Invalid Email", "Email local part (before @) cannot be empty!");
        return false;
    }
    int dotPos = domain.indexOf('.');
    if (dotPos == 0 || dotPos == domain.length() - 1) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Invalid Email", "Invalid domain format!");
        return false;
    }
    return true;
}

bool AuthManager::registerUser(const QString& username, const QString& password, const QString& nickname,
                               const QString& email, const QString& gender) {
    if (username.isEmpty() || password.isEmpty() || nickname.isEmpty() || email.isEmpty() || gender.isEmpty()) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "Please fill in all fields!");
        return false;
    }
    if (users.contains(username)) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "This username is already taken!");
        return false;
    }
    if (emailToUsername.contains(email)) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "This email is already used!");
        return false;
    }
    if (gender != "Male" && gender != "Female") {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "Gender must be 'Male' or 'Female'!");
        return false;
    }
    if (!isValidEmail(email)) {
        return false;
    }
    int newId = users.size() + 1;
    users[username] = qMakePair(password, newId);
    emailToUsername[email] = username;
    userMap[username] = User(newId, username, password, nickname, email, gender);
    saveData();
    showCustomMessageBox(nullptr, QMessageBox::Information, "Success", "Registration successful!");
    return true;
}

bool AuthManager::login(const QString& email, const QString& password, int& userId) {
    if (email.isEmpty() || password.isEmpty()) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "Email and password are required!");
        return false;
    }
    auto emailIt = emailToUsername.find(email);
    if (emailIt == emailToUsername.end()) {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "Email not found!");
        return false;
    }
    QString username = emailIt.value();
    auto userIt = users.find(username);
    if (userIt != users.end() && userIt.value().first == password) {
        userId = userIt.value().second;
        showCustomMessageBox(nullptr, QMessageBox::Information, "Success", "Login successful!");
        return true;
    }
    showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "Wrong password!");
    return false;
}

void AuthManager::loadData() {
    QFile file("/home/youmna/DS_p/users.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            int id = in.readLine().toInt();
            QString username = in.readLine();
            QString password = in.readLine();
            QString nickname = in.readLine();
            QString email = in.readLine();
            QString gender = in.readLine();
            users[username] = qMakePair(password, id);
            emailToUsername[email] = username;
            userMap[username] = User(id, username, password, nickname, email, gender);
        }
        file.close();
    }
}

void AuthManager::saveData() {
    QFile file("/home/youmna/DS_p/users.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (auto it = userMap.constBegin(); it != userMap.constEnd(); ++it) {
            const QString& username = it.key();
            const User& user = it.value();

            out << user.id << "\n"
                << username << "\n"
                << user.password << "\n"
                << user.nickname << "\n"
                << user.email << "\n"
                << user.gender << "\n";
        }
        file.close();
    } else {
        showCustomMessageBox(nullptr, QMessageBox::Warning, "Error", "Could not open file for writing.");
    }
}
