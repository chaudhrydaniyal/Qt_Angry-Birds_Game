#include"r1.h"
#include"mainwindow.h"
#include<QMediaPlayer>
#include<windows.h>
#include<QThread>
#include<qcoreapplication.h>
#include<QTime>
#include"r4.h"
extern Game* game;

R4::R4(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/r.png"));}
void R4::move()
{

    setTransformOriginPoint(50,50);
    setRotation(30);
    //delay();


    setRotation(80);

    setPos(820,525);










}






