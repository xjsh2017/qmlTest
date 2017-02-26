#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

#ifdef Q_USE_QML_RC
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
#else
    engine.load(QUrl::fromLocalFile(QGuiApplication::applicationDirPath() +
                                #if defined(Q_OS_WIN)
                                    QStringLiteral("/..")
                                #elif defined(Q_OS_MAC)
                                    QStringLiteral("/../../..")
                                #endif
                                + QStringLiteral("/../../main.qml")));
#endif

    return app.exec();
}
