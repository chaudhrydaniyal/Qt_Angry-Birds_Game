#include"r3.h"
#include"mainwindow.h"
extern Game* game;
R3::R3(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/ru.png"));





}
void R3::move()
{
setPos(790,580);
}
