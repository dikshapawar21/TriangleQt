#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(800, 600);
    setWindowTitle("Triangle");
    glwidget = new GLWidget(this);
    setCentralWidget(glwidget);
}

MainWindow::~MainWindow()
{}
