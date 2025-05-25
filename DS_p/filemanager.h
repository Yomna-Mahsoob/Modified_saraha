#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include<QVector>
#include<message.h>
#include<user.h>

class FileManager
{


public:

    FileManager();
    void ReadMessages(User&user);
    void savedMessages(Message&msg);
    int getNextMessageId();
    void deleteMessageById(int id);

    void saveUserContacts(User& user);
    void readUserContacts(User& user);
     void deleteContact(User& user, int contactIdToRemove);
    void saveRemovedContacts(User& user);
     void readRemovedContacts(User& user);

};

#endif // FILEMANAGER_H
