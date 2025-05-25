#ifndef AUTHMANAGER_H
#define AUTHMANAGER_H

#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <QMap>
#include <QPair>
#include "user.h"

class AuthManager {
public:
    static User currentuser;
    QMap<QString, QPair<QString, int>> users;
    QMap<QString, User> userMap;
    QMap<QString, QString> emailToUsername;
    AuthManager();
    bool registerUser(const QString& username, const QString& password, const QString& nickname,
                      const QString& email, const QString& gender);
    bool login(const QString& email, const QString& password, int& userId);
    bool isValidEmail(const QString& email);
    void saveData();
    void loadData();
    static void showCustomMessageBox(QWidget* parent, QMessageBox::Icon icon, const QString& title, const QString& message);


};

#endif // AUTHMANAGER_H
