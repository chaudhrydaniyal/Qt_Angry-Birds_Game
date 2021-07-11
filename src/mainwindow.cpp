#include "mainwindow.h"
#include"player.h"
#include"r1.h"
#include<r2.h>
#include"r3.h"
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
extern QGraphicsLineItem* line;
extern plot* p;
extern QGraphicsTextItem* text;
extern QGraphicsLineItem* fline;
extern     QGraphicsTextItem* t;
extern    QGraphicsLineItem* rline;

extern QMediaPlayer* maint;
extern QGraphicsScene* scene2;
extern QGraphicsScene* scene1;





Game::Game(QWidget *parent)

{


    scene1=new QGraphicsScene();
    scene1->setSceneRect(0,0,1000,700);




    setBackgroundBrush(QBrush(QImage(":/a/Fo.png")));

    /*QPixmap pim("./a/a.png");
    scene->setBackgroundBrush(pim.scaled(900,600),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));*/
    setScene(scene1);
    Player* player;
    player = new Player();
    player->setPos(-20,450);
    player->setScale(0.1);
    scene1->addItem(player);

    text=new QGraphicsTextItem;
    text->setPlainText(QString("Angle="+QString::number(p->angle)));
    text->setScale(2);
    text->setPos(200,500);
    scene1->addItem(text);

    //QGraphicsTextItem* name;
    //name=new QGraphicsTextItem;
    //name->setPlainText(QString("CHAUDHRY DANIAL KHALID"));
    //name->setScale(5);
    //name->setPos(0,25);
    //scene1->addItem(name);


    r1=new R1();
    r1->setPos(800,440);
    scene1->addItem(r1);

    r2=new R2();
    r2->setPos(1000,440);
    scene1->addItem(r2);

    r3=new R3();
    r3->setPos(790,430);
    scene1->addItem(r3);

    t=new QGraphicsTextItem;
    t->setPlainText(QString("Force"));
    t->setScale(2);
    t->setPos(120,125);
    scene1->addItem(t);




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



    scene1->addItem(line);
    scene1->addItem(fline);
    scene1->addItem(rline);



    player->setFlag(QGraphicsItem::ItemIsFocusable);

        player->setFocus();
        maint=new QMediaPlayer();

        maint->setMedia(QUrl("qrc:/a/s.mp3"));
        maint->setVolume(70);
        maint->play();





}

