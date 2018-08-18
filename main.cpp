#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget wgt;
    QWidget* pwgt1 = new QWidget(&wgt);
    QPalette pal1;

    pal1.setColor(pwgt1->backgroundRole(), Qt::red);
    pwgt1->setPalette(pal1);
    pwgt1->resize(100, 100);
    pwgt1->move(20, 20);
    pwgt1->setAutoFillBackground(true);

    QWidget* pwgt2 = new QWidget(&wgt);
    QPalette pal2;

    pal2.setColor(pwgt2->backgroundRole(), Qt::blue);
    pwgt2->setPalette(pal2);
    pwgt2->resize(100, 100);
    pwgt2->move(30, 30);
    pwgt2->setAutoFillBackground(true);

    wgt.resize(200, 200);
    wgt.show();

    return app.exec();
}
