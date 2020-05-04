#include "canvas.h"

Canvas::Canvas(QWidget* parent)
    : QOpenGLWidget { parent }
{

    // auto mySignal = static_cast<void (MyOpenGLWidget::*)(void)>(&MyOpenGLWidget::update);
    // connect(this, &MyOpenGLWidget::x1Changed, this, mySignal);
}

void Canvas::initializeGL()
{
    printf("initializeGL\n");
    this->adjustSize();
    initializeOpenGLFunctions();
}

void Canvas::resizeGL(int width, int height)
{
    printf("resizeGL\n");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void Canvas::paintGL()
{
    printf("paintGL\n");

    //glViewport(0, 0, w, h);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Canvas::resize(QResizeEvent* event)
{
    printf("current  %dx%d\n", width(), height());
    printf("new      %dx%d\n", event->size().width(), event->size().height());
    //resizeGL(event->size().width(), event->size().height());
}
