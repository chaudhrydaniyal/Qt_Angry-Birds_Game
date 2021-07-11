#include"r1.h"
#include"mainwindow.h"
#include<QMediaPlayer>
#include<windows.h>
#include<QThread>
#include<qcoreapplication.h>
#include<QTime>
extern Game* game;

R1::R1(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/r.png"));}
void R1::move()
{

    setTransformOriginPoint(50,50);
    setRotation(30);
    delay();


    setRotation(80);

    setPos(800,545);










}
void R1::delay()
{
    QTime dieTime= QTime::currentTime().addMSecs(50);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}





