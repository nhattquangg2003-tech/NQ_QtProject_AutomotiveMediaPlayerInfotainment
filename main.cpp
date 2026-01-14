#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "MusicController.h"
#include <QQmlContext>
#include "radiusimage.h"




int main(int argc, char *argv[])
{QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    MusicController musicController;

    engine.rootContext()->setContextProperty("musicController", &musicController);

   qmlRegisterType<RadiusImage>("RadiusImagelib", 1, 0, "RadiusImage");



    engine.loadFromModule("SS21_22", "Main");
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);







    return app.exec();
}
