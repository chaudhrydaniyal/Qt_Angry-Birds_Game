#include "mainwindow.h"
#include"r1.h"
#include"r2.h"
#include"r3.h"
#include"r4.h"
#include"r5.h"
#include"r6.h"
#include"r7.h"
#include"r8.h"
#include"r9.h"
#include"plot.h"
#include <QApplication>
#include<QObject>
#include<QGraphicsTextItem>
#include<QDebug>
#include<QMediaPlayer>
#include"game2.h"
#include"game3.h"
#include <QGraphicsScene>
#include<QGraphicsView>
Game* game;
R1* r1;
R2* r2;
R3* r3;
R4* r4;
R5* r5;
R6* r6;
R7* r7;
R8* r8;
R9* r9;
QGraphicsScene* scene3;
QGraphicsScene* scene2;
QGraphicsScene* scene1;



plot* p;
QGraphicsTextItem* text;
int* x=new int();
QGraphicsLineItem* line;
QGraphicsLineItem* fline;
QGraphicsTextItem* t;
QGraphicsLineItem* rline;
int flow=0;


QMediaPlayer* maint;
QMediaPlayer* maint2;

Game2* game2;
Game3* game3;



int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  game=new Game();
 game->resize(12500,750);

    game->show();
    if(flow==1)
        qDebug()<<"end";


    return a.exec();
}
