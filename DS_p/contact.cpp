#include "contact.h"

Contact::Contact() {
     contactId=0;
     messageCount=0;
}
Contact::Contact(int id,int count) {
    contactId=id;
    messageCount=count;
}

int Contact::getContactId() const {
    return contactId;
}

int Contact::getMessageCount() const {
    return messageCount;
}

void Contact::setMessageCount(int count) {
    messageCount = count;
}
void Contact::incrementMessageCount() {
    messageCount++;
}

