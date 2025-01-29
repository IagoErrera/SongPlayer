#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>

#include "PlayerController.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    app.setWindowIcon(QIcon(":/SongPlayer/assets/icons/app_icon.ico"));

    QQmlApplicationEngine engine;

    PlayerController *playerController = new PlayerController(&app);
    qmlRegisterSingletonInstance("com.company.PlayerController", 1, 0, "PlayerController", playerController);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("SongPlayer", "Main");

    return app.exec();
}
