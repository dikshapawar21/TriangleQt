#include <QMainWindow>
#include "glwidget.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private: 
    GLWidget *glwidget;
};
