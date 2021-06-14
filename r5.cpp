#include"r1.h"
#include"mainwindow.h"
#include<QMediaPlayer>
#include<windows.h>
#include<QThread>
#include<qcoreapplication.h>
#include<QTime>
#include"r5.h"
#include"r4.h"
extern Game* game;

R5::R5(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/r.png"));}
void R5::move()
{

    setTransformOriginPoint(50,50);
    setRotation(30);
    //delay();


    setRotation(80);

    setPos(990,520);










}






