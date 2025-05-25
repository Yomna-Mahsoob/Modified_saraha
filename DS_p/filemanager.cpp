#include "filemanager.h"
#include "contact.h"
#include<fstream>
#include<QStringList>
#include<QDebug>
#include<authmanager.h>
using namespace std;
FileManager::FileManager() {}

void FileManager::ReadMessages(User &user){
    user.sentmessages.clear();
    user.recievedmessages.clear();
    user.contacts.clear();
     readRemovedContacts(user);
    ifstream file("/home/youmna/DS_p/messages.txt");
    if(!file.is_open()){
        qDebug() << "Failed to open file\n";
        return;
    }
    string line;
    while (getline(file, line)) {
        QString qLine = QString::fromStdString(line);
        QStringList parts = qLine.split(",");
        if(parts.size()>=7){
            Message msg;
            msg.setMsgId(parts[0].toInt());
            msg.setSID(parts[1].toInt());
            msg.setRID(parts[2].toInt());
            msg.setContent(parts[3]);
            msg.setTime(parts[4]);
            msg.setFavor(parts[5].toInt());
            msg.setShowName(parts[6].toInt());
            if(msg.getSID()==user.id){
                user.addsentMessages(msg);
            }
               if(msg.getRID()==user.id&&msg.getSID()!=user.id){
                  user.addRecievedMessages(msg.getSID(),msg);
                   if(!user.removeContacts.contains(msg.getSID())){
                      if(!user.contacts.contains(msg.getSID())){
                          user.contacts[msg.getSID()]=Contact(msg.getSID(),1);

                   }else{
                       user.contacts[msg.getSID()].incrementMessageCount();
                   }
                   }}

            if(msg.IsFavor()&&msg.getSID()==user.id){
                user.addFavoriteMessages(msg);
            }
        }
    }
    for (auto it = user.contacts.begin(); it != user.contacts.end(); ++it) {
        int contactId = it.key();
        int messageCount = 0;
        if (user.recievedmessages.contains(contactId)) {
            messageCount += user.recievedmessages[contactId].size();
        }
        it.value().setMessageCount(messageCount);
    }
    saveUserContacts(user);
    file.close();
}
void FileManager::savedMessages(Message &msg){
    ofstream file("/home/youmna/DS_p/messages.txt",ios::app);
    if(!file.is_open()){
        qDebug() << "Failed to open file for writing\n";
        return;
    }
    file << msg.getMsgId() << ","
         << msg.getSID() << ","
         << msg.getRID() << ","
         << msg.getContent().toStdString() << ","
         << msg.getTime().toStdString() << ","
         << msg.IsFavor() << ","
         << msg.isSenderNameShown() << "\n";
    file.close();

}
int FileManager::getNextMessageId() {
    ifstream file("/home/youmna/DS_p/messages.txt");
    if (!file.is_open()) {
        return 1;
    }

    string line;
    int lastId = 0;
    while (getline(file, line)) {
        QString qLine = QString::fromStdString(line);
        QStringList parts = qLine.split(",");
        if (parts.size() >= 1) {
            int id = parts[0].toInt();
            if (id > lastId)
                lastId = id;
        }
    }
    file.close();
    return lastId + 1;
}
void FileManager::deleteMessageById(int msgId) {
    ifstream inFile("/home/youmna/DS_p/messages.txt");
    if (!inFile.is_open()) {
        qDebug() << "Failed to open file for reading.";
        return;
    }

    vector<string> lines;
    string line;

    while (getline(inFile, line)) {
        QString qLine = QString::fromStdString(line);
        QStringList parts = qLine.split(",");
        if (parts.size() >= 1) {
            int id = parts[0].toInt();
            if (id != msgId) {
                lines.push_back(line);
            }
        }
    }
    inFile.close();


    ofstream outFile("/home/youmna/DS_p/messages.txt");
    if (!outFile.is_open()) {
        qDebug() << "Failed to open file for writing.";
        return;
    }

    for (const string& l : lines) {
        outFile << l << "\n";
    }
    outFile.close();
}


void FileManager::deleteContact(User& user, int contactIdToRemove) {
    ifstream inFile("/home/youmna/DS_p/contacts.txt");
    vector<string> lines;

    if (!inFile.is_open()) {
        qDebug() << "Failed to open contacts file for reading.";
        return;
    }

    string line;
    while (getline(inFile, line)) {
        QString qLine = QString::fromStdString(line);
        QStringList parts = qLine.split(",");


        if (parts.size() >= 3) {
            int userId = parts[0].toInt();
            int contactId = parts[1].toInt();

            if (!(userId == user.id && contactId == contactIdToRemove)) {
                lines.push_back(line);
            }
        }
    }
    inFile.close();


    ofstream outFile("/home/youmna/DS_p/contacts.txt");
    if (!outFile.is_open()) {
        qDebug() << "Failed to open contacts file for writing.";
        return;
    }

    for (const string& l : lines) {
        outFile << l << "\n";
    }

    outFile.close();


    user.contacts.remove(contactIdToRemove);
}

void FileManager::saveUserContacts(User& user) {
 ifstream inFile("/home/youmna/DS_p/contacts.txt");
    vector<string> lines;
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            QString qLine = QString::fromStdString(line);
            QStringList parts = qLine.split(",");
            if (parts.size() >= 3 && parts[0].toInt() != user.id) {
                lines.push_back(line);
            }
        }
        inFile.close();
    }

    ofstream outFile("/home/youmna/DS_p/contacts.txt");
    if (!outFile.is_open()) {
        qDebug() << "Failed to open contacts for writing.";
        return;
    }
    for (const string& line : lines) {
        outFile << line << "\n";
    }
    for (auto it = user.contacts.begin(); it != user.contacts.end(); ++it) {
        outFile << user.id << "," << it.key() << "," << it.value().getMessageCount() << "\n";
    }
    outFile.close();
}

void FileManager::readUserContacts(User& user) {
       user.contacts.clear();
    ifstream file("/home/youmna/DS_p/contacts.txt");
    if (!file.is_open()) {
        qDebug() << "Failed to open contacts for reading";
        return;
    }
    string line;
    while (getline(file, line)) {
        QString qLine = QString::fromStdString(line);
        QStringList parts = qLine.split(",");
        if (parts.size() >= 3 && parts[0].toInt() == user.id) {
            int contactId = parts[1].toInt();
            int messageCount = parts[2].toInt();
            user.contacts[contactId] = Contact(contactId, messageCount);
        }
    }
    file.close();
}

void FileManager::saveRemovedContacts(User& user) {
    QFile file("/home/youmna/DS_p/removed_contacts.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int id : user.removeContacts) {
            out << user.id << "," << id << "\n";
        }
        file.close();
    }
}
void FileManager::readRemovedContacts(User& user) {
    user.removeContacts.clear();
    QFile file("/home/youmna/DS_p/removed_contacts.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if (parts.size() == 2 && parts[0].toInt() == user.id) {
                user.removeContacts.insert(parts[1].toInt());
            }
        }
        file.close();
    }
}
