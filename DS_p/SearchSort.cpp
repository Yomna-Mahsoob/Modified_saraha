#include "SearchSort.h"
#include <algorithm>

SearchSort::SearchSort() {}

void SearchSort::sortByMessageCount() {
    std::sort(contacts.begin(), contacts.end(),
              [](const Contact& a, const Contact& b) { return a > b; });
}

QString SearchSort::findContact(int contactId) const {
    auto it = idMap.find(contactId);
    return (it != idMap.end()) ? it->second->print() : "Contact not found";
}

QString SearchSort::printContacts() const {
    QString result;
    for (const auto& contact : contacts) {
        result += contact.print() + "\n";
    }
    return result;
}

void SearchSort::populateContacts(const std::vector<std::pair<int, int>>& contactData) {
    contacts.clear();
    idMap.clear();
    for (const auto& [contactId, messageCount] : contactData) {
        contacts.emplace_back(contactId, messageCount);
        idMap[contactId] = &contacts.back();
    }
}
