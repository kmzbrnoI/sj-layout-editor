#include "main_window.h"

#include <QApplication>
#include <QSurfaceFormat>
#include <QtGui>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    format.setVersion(3, 2);
    format.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(format);

    MainWindow window;
    window.setWindowTitle("simJOP Layout Editor");
    window.showMaximized();
    return app.exec();
}
