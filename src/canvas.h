#ifndef CANVAS_H
#define CANVAS_H

#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QResizeEvent>

class Canvas : public QOpenGLWidget, protected QOpenGLFunctions {
    Q_OBJECT

public:
    Canvas(QWidget* parent = nullptr);

protected slots:
    void resize(QResizeEvent* event);

protected:
    void initializeGL() override;
    void resizeGL(int width, int height) override;
    void paintGL() override;
};

#endif // CANVAS_H
