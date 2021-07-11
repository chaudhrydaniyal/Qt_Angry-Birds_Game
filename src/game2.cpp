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
#include<QGraphicsTextItem>
extern R1* r1;
extern R2* r2;
extern R3* r3;
extern R4* r4;
extern R5* r5;
extern R6* r6;


extern QGraphicsLineItem* line;
extern plot* p;
extern QGraphicsTextItem* text;
extern QGraphicsLineItem* fline;
extern     QGraphicsTextItem* t;
extern    QGraphicsLineItem* rline;
extern QMediaPlayer* maint2;
extern QGraphicsScene* scene2;







Game2::Game2(QWidget *parent)

{


    scene2=new QGraphicsScene();
    scene2->setSceneRect(0,0,1000,700);



    setBackgroundBrush(QBrush(QImage(":/a/Fo.png")));

    /*QPixmap pim("./a/a.png");
    scene->setBackgroundBrush(pim.scaled(900,600),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));*/
    setScene(scene2);
    Player2* player2;
    player2 = new Player2();
    player2->setPos(-20,450);
    player2->setScale(0.1);
    scene2->addItem(player2);

    text=new QGraphicsTextItem;
    text->setPlainText(QString("Angle="+QString::number(p->angle)));
    text->setScale(2);
    text->setPos(200,500);
    scene2->addItem(text);

    r1=new R1();
    r1->setPos(800,440);
    scene2->addItem(r1);

    r2=new R2();
    r2->setPos(1000,440);
    scene2->addItem(r2);

    //QGraphicsTextItem* name;
    //name=new QGraphicsTextItem;
    //name->setPlainText(QString("CHAUDHRY DANIAL KHALID"));
    //name->setScale(5);
    //name->setPos(0,25);
    //scene2->addItem(name);

    r3=new R3();
    r3->setPos(790,430);
    scene2->addItem(r3);

    r4=new R4();
    r4->setPos(820,250);
    scene2->addItem(r4);

    r5=new R5();
    r5->setPos(980,250);
    scene2->addItem(r5);


    r6=new R6();
    r6->setPos(790,230);
    scene2->addItem(r6);

    t=new QGraphicsTextItem;
    t->setPlainText(QString("Force"));
    t->setScale(2);
    t->setPos(120,125);
    scene2->addItem(t);




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



    scene2->addItem(line);
    scene2->addItem(fline);
    scene2->addItem(rline);



    player2->setFlag(QGraphicsItem::ItemIsFocusable);

        player2->setFocus();
        maint2=new QMediaPlayer();

        maint2->setMedia(QUrl("qrc:/a/s.mp3"));
        maint2->setVolume(70);
        maint2->play();





}

