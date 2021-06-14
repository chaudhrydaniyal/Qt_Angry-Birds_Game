#include"r3.h"
#include"mainwindow.h"
#include"r9.h"
extern Game* game;
R9::R9(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/ru.png"));





}
void R9::move()
{
setPos(790,580);
}
