#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "backend_bridge.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    BackendBridge backend;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("backend", &backend);

    const QUrl url(u"qrc:/App/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
