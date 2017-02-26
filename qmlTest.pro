TEMPLATE = app

QT += qml quick

QML_IMPORT_PATH=$(QML2_IMPORT_PATH)
message($$QML_IMPORT_PATH)

SOURCES += main.cpp
RESOURCES += \
    $$[QT_INSTALL_QML]/icons/icons_all.qrc

qmldemo.files += \
    ./*.qml


OTHER_FILES += $$qmldemo.files
