#include "mainwindow.h"
#include"newRoute.h"
#include"Personaltrip.h"
#include <QApplication>
#include<QTextCodec>

int main(int argc, char *argv[])
{//�˴���ִ�е���
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");

   // QTextCodec::setCodecForTr(codec);

    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
}