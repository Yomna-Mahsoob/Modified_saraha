#include "user.h"
#include "contact.h"
#include<QDebug>
#include<QMessageBox>
#include"message.h"
User::User() {
    id = 0;
    username = "";
    password = "";
    nickname = "";
    email = "";
    gender = "";

}
User::User(int _id, const QString& _username, const QString& _password,
           const QString& _nickname, const QString& _email, const QString& _gender) {
    id = _id;
    username = _username;
    password = _password;
    nickname = _nickname;
    email = _email;
    gender = _gender;
}
void User::addsentMessages(Message&msg){
     sentmessages.push(msg);
}
void User::addRecievedMessages(int contactID,Message&msg){
 recievedmessages[contactID].append(msg);

}//*******



//** fav **//
void User::addFavoriteMessages(Message& msg){
    // This is now handled by the IsFavor flag in the received messages
    // No need to maintain a separate vector
}
//** **//

QStack<Message> User::getSentMessages(){
    return sentmessages;
}
QVector<Message> User::getReceivedMessages(int contactID){
    if (recievedmessages.contains(contactID)) {
        return recievedmessages[contactID];
    }
    return QVector<Message>();
}//*************************************************


//** fav **//
QVector<Message> User::getFavoriteMessages(){
    QVector<Message> favorites;
    for (const auto& contactMsgs : recievedmessages) {
        for (const Message& msg : contactMsgs) {
            if (msg.IsFavor()) {
                favorites.append(msg);
            }
        }
    }
    return favorites;
}
//** **//

void User:: setsentMessages(QStack<Message>stack){
    this->sentmessages=stack;
}



QMap<int,Contact> User::getContacts() const {
    return contacts;
}


bool User::removeContact(int contactId) {
    if (contacts.contains(contactId)) {
        contacts.remove(contactId);
        removeContacts.insert(contactId);
        return true;
    }


    return false;
}
bool User::searchContact(int contactId) const {
    if (contacts.contains(contactId)) {
       QMessageBox::information(nullptr, "Success", "Contact Is Found");
        return true;
    }
      QMessageBox::warning(nullptr, "Error", "Contact Is Not Found");
    return false;
}

QList<Contact> User::getContactsSortedByMessageCount() const {
    QList<Contact> contactList;
    for (auto it = contacts.constBegin(); it != contacts.constEnd(); ++it) {
        contactList.append(it.value());
    }
    // Sort by message count (descending)
    std::sort(contactList.begin(), contactList.end(),
              [](const Contact& a, const Contact& b) {
                  return a.getMessageCount() > b.getMessageCount();
              });
    return contactList;
}
