#include "glwidget.h"

GLWidget::GLWidget(QWidget* parent)
    : QOpenGLWidget(parent)
{
}

GLWidget::~GLWidget()
{
}

void GLWidget::initializeGL(){
    initializeOpenGLFunctions();
    glClearColor(0.2,0.2,0.2,1);
}

void GLWidget::paintGL(){
    qDebug() << "paintGL called";
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0);
    glVertex3f(-0.5, -0.5, 0);
    glColor3f(0, 1, 0);
    glVertex3f(0.5, -0.5, 0);
    glColor3f(0, 0, 1);
    glVertex3f(0.0, 0.5, 0);

    glEnd();
    
}

void GLWidget::resizeGL(int w, int h){
    glViewport(0, 0, w, h);
}