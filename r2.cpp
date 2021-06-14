#include"r2.h"
#include"mainwindow.h"
#include<qmediaplayer.h>
extern Game* game;
R2::R2(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/r.png"));





}
void R2::move()
{

    setTransformOriginPoint(50,50);
    setRotation(60);
    setPos(1000,510);
    QMediaPlayer* m=new QMediaPlayer();

    m->setMedia(QUrl("qrc:/a/destroy.mp3"));

    m->play();
}


