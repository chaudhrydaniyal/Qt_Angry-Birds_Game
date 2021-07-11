#include"r6.h"
#include"mainwindow.h"
extern Game* game;
R6::R6(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/a/ru.png"));





}
void R6::move()
{
setPos(790,510);
}
