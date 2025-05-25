#ifndef SEARCHSORT_H
#define SEARCHSORT_H

#include <vector>
#include <unordered_map>
#include <QString>

class SearchSort {
private:
    struct Contact {
        int contactId;
        int messageCount;
        Contact(int id, int count) : contactId(id), messageCount(count) {}
        bool operator>(const Contact& other) const { return messageCount > other.messageCount; }
        QString print() const { return QString("Contact %1: %2 messages").arg(contactId).arg(messageCount); }
    };

    std::vector<Contact> contacts;
    std::unordered_map<int, Contact*> idMap;

public:
    SearchSort();
    void sortByMessageCount();
    QString findContact(int contactId) const;
    QString printContacts() const;
    void populateContacts(const std::vector<std::pair<int, int>>& contactData);
};

#endif // SEARCHSORT_H
