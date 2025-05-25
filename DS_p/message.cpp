#include "message.h"

Message::Message() {}

Message::Message(int mId, int sId, int rId, QString text, QString time, bool favor, bool ShowName)
    : msgid(mId), reciverid(rId), senderid(sId), content(text), timestamp(time), isFavorite(favor), showName(ShowName) {};

// Getters
int Message::getMsgId() const { return msgid; }
int Message::getRID() const { return reciverid; }
int Message::getSID() const { return senderid; }
QString Message::getContent() const { return content; }
QString Message::getTime() const { return timestamp; }
bool Message::IsFavor() const { return isFavorite; }
bool Message::isSenderNameShown() const { return showName; }



void Message::setMsgId(int id) { msgid = id; }
void Message::setSID(int sid) { senderid = sid; }
void Message::setRID(int rid) { reciverid = rid; }
void Message::setContent(const QString& text) { content = text; }
void Message::setTime(const QString& time) { timestamp = time; }
void Message::setFavor(bool f) { isFavorite = f; }
void Message::setShowName(bool s) { showName = s; }
