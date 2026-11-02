#ifndef BACKENDBRIDGE_H
#define BACKENDBRIDGE_H

#include <QObject>
#include <QString>

extern "C" {
    #include "core.h"
}

class BackendBridge : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString message READ message NOTIFY messageChanged)

public:
    explicit BackendBridge(QObject *parent = nullptr);
    QString message() const;

public slots:
    void executeLogic();

signals:
    void messageChanged();

private:
    QString m_message;
};

#endif
