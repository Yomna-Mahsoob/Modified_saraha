#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>

class Message
{
private:
    int msgid;
    int reciverid;
    int senderid;
    QString content;
    QString timestamp;
    bool isFavorite;
    bool showName;

public:
    Message();
    Message(int mId, int sId, int rId, QString text, QString time, bool favor, bool showName);

    // Getters
    int getMsgId() const;
    int getRID() const;
    int getSID() const;
    QString getContent() const;
    QString getTime() const;
    bool IsFavor() const;
    bool isSenderNameShown() const;

    // Setters
    void setMsgId(int id);
    void setSID(int sid);
    void setRID(int rid);
    void setContent(const QString& text);
    void setTime(const QString& time);
    void setFavor(bool f);
    void setShowName(bool s);
};

#endif // MESSAGE_H
