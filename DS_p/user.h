#ifndef USER_H
#define USER_H
#include<message.h>
#include<contact.h>
#include <QString>
#include<QVector>
#include<QStack>
#include<QMap>
#include<QSet>
class User {
public:
    int id;
    QString username;
    QString password;
    QString nickname;
    QString email;
    QString gender;
    QStack<Message>sentmessages;
    QMap<int,QVector<Message>>recievedmessages;//*******
    //QVector<Message>favormessages;
    QMap<int, Contact> contacts;
    QSet<int>removeContacts;
    User();

    User(int _id, const QString& _username, const QString& _password,
         const QString& _nickname, const QString& _email, const QString& _gender);
     void addsentMessages(Message& msg);
     void addRecievedMessages(int contactID,Message& msg);//*******
     void addFavoriteMessages(Message& msg);
     QStack<Message>getSentMessages();
     QVector<Message>getReceivedMessages(int contactID);//*******
     QVector<Message>getFavoriteMessages();
     void setsentMessages(QStack<Message>stack);



     bool removeContact(int contactId);
     bool searchContact(int contactId) const;
     QMap<int,Contact>getContacts()const;
     QList<Contact> getContactsSortedByMessageCount() const;


};

#endif // USER_H
