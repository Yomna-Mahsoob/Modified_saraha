#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
private:
    int contactId;
    int messageCount;
public:
    Contact();
    Contact(int id,int count = 0);

    int getContactId() const;
    int getMessageCount() const;
    void setMessageCount(int count);
    void incrementMessageCount();

};

#endif // CONTACT_H
