#include "backend.h"

BackendBridge::BackendBridge(QObject *parent) : QObject(parent) {
    m_message = "Esperando...";
}

QString BackendBridge::message() const {
    return m_message;
}

void BackendBridge::executeLogic() {
    m_message = QString::fromUtf8(get_hello_message());
    emit messageChanged();
}
