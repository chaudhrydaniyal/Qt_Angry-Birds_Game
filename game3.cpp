#include "mainwindow.h"
#include"player.h"
#include"r1.h"
#include<r2.h>
#include"player2.h"
#include<game2.h>
#include"r3.h"
#include"r5.h"
#include"r4.h"
#include"r6.h"
#include<QBrush>
#include<QImage>
#include<QTimer>
#include<QUrl>
#include<QKeyEvent>
#include<QMediaPlayer>
#include<QGraphicsLineItem>
#include"plot.h"
#include<QPen>
#include<QPainter>
#include"game3.h"
#include<QGraphicsTextItem>
#include"player3.h"
#include"r7.h"
#include"r8.h"
#include"r9.h"
extern R1* r1;
extern R2* r2;
extern R3* r3;
extern R4* r4;
extern R5* r5;
extern R6* r6;
extern R7* r7;
extern R8* r8;
extern R9* r9;



extern QGraphicsLineItem* line;
extern plot* p;
extern QGraphicsTextItem* text;
extern QGraphicsLineItem* fline;
extern     QGraphicsTextItem* t;
extern    QGraphicsLineItem* rline;
extern QGraphicsScene* scene3;
extern QGraphicsScene* scene2;




Game3::Game3(QWidget *parent)

{


    scene3=new QGraphicsScene();
    scene3->setSceneRect(0,0,1000,700);



    setBackgroundBrush(QBrush(QImage(":/a/Fo.png")));

    /*QPixmap pim("./a/a.png");
    scene->setBackgroundBrush(pim.scaled(900,600),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));*/
    setScene(scene3);
    Player3* player3;
    player3 = new Player3();
    player3->setPos(-20,450);
    player3->setScale(0.1);
    scene3->addItem(player3);

    text=new QGraphicsTextItem;
    text->setPlainText(QString("Angle="+QString::number(p->angle)));
    text->setScale(2);
    text->setPos(200,500);
    scene3->addItem(text);

    r1=new R1();
    r1->setPos(800,440);
    scene3->addItem(r1);

    r2=new R2();
    r2->setPos(1000,440);
    scene3->addItem(r2);

    r3=new R3();
    r3->setPos(790,430);
    scene3->addItem(r3);

    //QGraphicsTextItem* name;
    //name=new QGraphicsTextItem;
    //name->setPlainText(QString("CHAUDHRY DANIAL KHALID"));
    //name->setScale(5);
    //name->setPos(0,25);
    //scene3->addItem(name);

    r4=new R4();
    r4->setPos(820,250);
    scene3->addItem(r4);

    r5=new R5();
    r5->setPos(980,250);
    scene3->addItem(r5);


    r6=new R6();
    r6->setPos(790,230);
    scene3->addItem(r6);

    r7=new R7();
    r7->setPos(840,50);
    scene3->addItem(r7);

    r8=new R8();
    r8->setPos(960,50);
    scene3->addItem(r8);

    r9=new R9();
    r9->setPos(790,30);
    scene3->addItem(r9);

    t=new QGraphicsTextItem;
    t->setPlainText(QString("Force"));
    t->setScale(2);
    t->setPos(120,125);
    scene3->addItem(t);




    line=new QGraphicsLineItem();
    line->setLine(0,550,300,550);
    line->setTransformOriginPoint(0,550);
    QPen pen;
    pen.setWidth(3);
    line->setPen(pen);
    line->setRotation(-40);

    fline=new QGraphicsLineItem;
    QPen p1;
    p1.setWidth(5);
    fline->setLine(150,175,150,225);
    fline->setPen(p1);


    rline=new QGraphicsLineItem;
    rline->setLine(0,200,300,200);
    rline->setPen(pen);



    scene3->addItem(line);
    scene3->addItem(fline);
    scene3->addItem(rline);



    player3->setFlag(QGraphicsItem::ItemIsFocusable);

        player3->setFocus();
        QMediaPlayer* m=new QMediaPlayer();

        m->setMedia(QUrl("qrc:/a/H.mp3"));
        m->setVolume(70);
        m->play();





}

