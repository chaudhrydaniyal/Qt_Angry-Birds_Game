#include "Player.h"
#include"mainwindow.h"
#include"R1.h"
#include"R2.h"
#include"R3.h"
#include<windows.h>
#include<QThread>
#include <QGraphicsScene>
#include <QKeyEvent>
#include<QTimer>
#include<QList>
#include"plot.h"
#include<qdebug.h>
#include<QMediaPlayer>
#include<QTime>
#include<game2.h>
#include"player2.h"

#include"r4.h"
#include"r5.h"
#include"r6.h"
#include"game3.h"
extern Game2* game2;
extern Game* game;
extern R1* r1;
extern R2* r2;
extern R3* r3;
extern R4* r4;
extern R5* r5;
extern R6* r6;
extern plot* p;
extern QGraphicsLineItem* line;
extern QGraphicsTextItem* text;
extern QGraphicsLineItem* fline;
extern QGraphicsTextItem* t;
extern     QGraphicsLineItem* rline;
extern int flow;
extern QMediaPlayer* maint;
extern QMediaPlayer* maint2;

extern Game3* game3;
extern QGraphicsScene* scene2;



Player2::Player2(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set bullet sound

    // set graphic

    setPixmap(QPixmap(":/a/angrybird.png"));
    p=new plot;



}
void Player2::keyPressEvent(QKeyEvent *event){


    if (event->key() == Qt::Key_Left){
        if(p->force>3)
        {
        p->force=p->force-2;
        if (p->force==5)
        fline->setLine(150,175,150,225);

        if (p->force==3)
        fline->setLine(10,175,10,225);
        if (p->force==7)
        fline->setLine(290,175,290,225);
}
    }

     if (event->key() == Qt::Key_Right){
         if(p->force<=5)
         {

        p->force=p->force+2;

        if (p->force==5)
        fline->setLine(150,175,150,225);

        if (p->force==3)
        fline->setLine(10,175,10,225);
        if (p->force==7)
        fline->setLine(290,175,290,225);
}
    }


     if (event->key() == Qt::Key_Up){

         if(p->angle<75)
         {
        p->angle=p->angle+15;

        line->setRotation(-(p->angle-5));
        text->setPlainText(QString("Angle="+QString::number(p->angle)));

}

    }

     if (event->key() == Qt::Key_Down){
         if (p->angle>15)

         {
        p->angle=p->angle-15;

        line->setRotation(-(p->angle-5));
        text->setPlainText(QString("Angle="+QString::number(p->angle)));

}

    }


    if (event->key() == Qt::Key_Space){


        QMediaPlayer* m=new QMediaPlayer();
        m->setMedia(QUrl("qrc:/a/fly.mp3"));
        m->play();

        scene()->removeItem(line);
        scene()->removeItem(text);
        scene()->removeItem(t);
        scene()->removeItem(rline);

        scene()->removeItem(fline);



        if (p->angle==45 )
        {
            //myTimer.start();

                QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move45_5()));}

        if (p->angle==30 )
                QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move30_5()));

        if (p->angle==60)
 QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move60_5()));

        if (p->angle==75)
 QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move75_5()));

        if (p->angle==15)
 QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move15_5()));




        timer->start(25);



    }
}




void Player2::move45_5(){


    QList<QGraphicsItem*> colliding=collidingItems();
    for(int i=0,n=colliding.size();i<n;i++)
    {
        if (typeid(*colliding[i])==typeid(R1))
        {scene()->removeItem(this);
        r1->move();
        QGraphicsTextItem* abc=new QGraphicsTextItem;
                            abc->setPlainText(QString("TRY AGAIN"));
                            abc->setScale(4);
                            abc->setPos(280,350);
                            scene2->addItem(abc);
        }


 if (typeid(*colliding[i])==typeid(R2))
                {scene()->removeItem(this);}


                if (typeid(*colliding[i])==typeid(R3))
                {scene()->removeItem(this);
                    QMediaPlayer* m=new QMediaPlayer();

                    m->setMedia(QUrl("qrc:/a/destroy.mp3"));


                    m->play();


                r1->move();


                r1->delay();
                r3->move();
                r4->move();
                r5->move();
                r6->move();
                flow++;
                qDebug()<<flow;

                //game2-> show();
                //delete (game);



                }
                if (typeid(*colliding[i])==typeid(R4))
                {scene()->removeItem(this);}
                if (typeid(*colliding[i])==typeid(R5))
                {scene()->removeItem(this);}
                if (typeid(*colliding[i])==typeid(R6))
                {scene()->removeItem(this);
                r6->move();
                r6->setPos(790,610);}


            }
  /*  static int a=y();
   xseconds=( myTimer.elapsed()/100*5);
   yseconds=-((myTimer.elapsed()/1000*70)-((9.8*(myTimer.elapsed()/1000)*(myTimer.elapsed()/1000))/2));


           qDebug()<<yseconds;





   setPos(xseconds,a+yseconds);
*/



            // bird movement
            if (p->force==5)
            {

            if(x()<=330)
            {

            setPos(x()+4,y()-2.5);
            }
            if(x()>330 & x()<=430)
            {
                setPos(x()+4,y()-1);
            }
            if(x()>430 & x()<=530)
            {
                setPos(x()+4,y()+1);
            }
            if(x()>530)
            {
                setPos(x()+4,y()+2.5);
            }

            }


            if (p->force==3)
            {

            if(x()<=230)
            {

            setPos(x()+3,y()-2.5);
            }
            if(x()>230 & x()<=330)
            {
                setPos(x()+3,y()-1);
            }
            if(x()>330 & x()<=430)
            {
                setPos(x()+3,y()+1);
            }
            if(x()>430)
            {
                setPos(x()+3,y()+2.5);
            }
            }



            if (p->force==7)
            {

            if(x()<=530)
            {

            setPos(x()+6,y()-2.5);
            }
            if(x()>530 & x()<=630)
            {
                setPos(x()+6,y()-1);
            }
            if(x()>630 & x()<=730)
            {
                setPos(x()+6,y()+1);
            }
            if(x()>730)
            {
                setPos(x()+6,y()+2.5);
            }

            }







        }




void Player2::move30_5(){


    QList<QGraphicsItem*> colliding=collidingItems();
    for(int i=0,n=colliding.size();i<n;i++)
    {
        if (typeid(*colliding[i])==typeid(R1))
        {scene()->removeItem(this);
        r1->move();
        QGraphicsTextItem* abc=new QGraphicsTextItem;
                            abc->setPlainText(QString("TRY AGAIN"));
                            abc->setScale(4);
                            abc->setPos(280,350);
                            scene2->addItem(abc);
        }


                if (typeid(*colliding[i])==typeid(R2))
                {scene()->removeItem(this);
                    QGraphicsTextItem* abc=new QGraphicsTextItem;
                                        abc->setPlainText(QString("TRY AGAIN"));
                                        abc->setScale(4);
                                        abc->setPos(280,350);
                                        scene2->addItem(abc);}


                if (typeid(*colliding[i])==typeid(R3))
                {scene()->removeItem(this);
                    QMediaPlayer* m=new QMediaPlayer();

                    m->setMedia(QUrl("qrc:/a/destroy.mp3"));


                    m->play();


                r1->move();


                r1->delay();
                r3->move();
                r4->move();
                r5->setPos(990,260);
                r6->move();


                m->stop();
                QGraphicsTextItem* abc=new QGraphicsTextItem;
                                    abc->setPlainText(QString("TRY AGAIN"));
                                    abc->setScale(4);
                                    abc->setPos(280,350);
                                    scene2->addItem(abc);

                }



            }


    if(p->force==5)
    {

            if(x()<450)
            {

            setPos(x()+5,y()-1);
            }
            if(x()>=450)
            {
                setPos(x()+5,y()+1);
            }
    }

    if(p->force==3)

            {
            if(x()<350)
            {

            setPos(x()+4,y()-1);
            }
            if(x()>=350)
            {
                setPos(x()+4,y()+1);
            }
    }
    if(p->force==7)

            if(x()<550)
            {

            setPos(x()+7,y()-1);
            }
            if(x()>=550)
            {
                setPos(x()+7,y()+1);
            }

        }







void Player2::move60_5(){


    QList<QGraphicsItem*> colliding=collidingItems();
    for(int i=0,n=colliding.size();i<n;i++)
    {
        if (typeid(*colliding[i])==typeid(R1))
        {scene()->removeItem(this);
        r1->move();
        QGraphicsTextItem* abc=new QGraphicsTextItem;
                            abc->setPlainText(QString("TRY AGAIN"));
                            abc->setScale(4);
                            abc->setPos(280,350);
                            scene2->addItem(abc);
        }


 if (typeid(*colliding[i])==typeid(R2))
                {scene()->removeItem(this);}


                if (typeid(*colliding[i])==typeid(R3))
                {scene()->removeItem(this);
                    QMediaPlayer* m=new QMediaPlayer();

                    m->setMedia(QUrl("qrc:/a/destroy.mp3"));


                    m->play();


                r1->move();

                r2->move();
                r1->delay();
                r3->move();
                r4->move();
                r5->move();
                r6->move();
                maint2->stop();
                game3=new Game3();
                game3->resize(13490,750);
                r1->delay();
                r1->delay();
                r1->delay();

                game3->show();
                delete (game2);



               // m->stop();

                }
                if (typeid(*colliding[i])==typeid(R4))
                {scene()->removeItem(this);}
                if (typeid(*colliding[i])==typeid(R5))
                {scene()->removeItem(this);}
                if (typeid(*colliding[i])==typeid(R6))
                {scene()->removeItem(this);
                r6->move();
                r6->setPos(790,590);
                QGraphicsTextItem* abc=new QGraphicsTextItem;
                                    abc->setPlainText(QString("TRY AGAIN"));
                                    abc->setScale(4);
                                    abc->setPos(280,350);
                                    scene2->addItem(abc);

                }
    }

                // bird movement
    if(p->force==5)
    {
                if(x()<=300)
                {

                setPos(x()+4,y()-3);
                }
                if(x()>300 & x()<=400)
                {
                    setPos(x()+4,y()-1);
                }
                if(x()>400 & x()<=500)
                {
                    setPos(x()+4,y()+1);
                }
                if(x()>500)
                {
                    setPos(x()+4,y()+3);
                }
    }

    if(p->force==3)
    {
                if(x()<=210)
                {

                setPos(x()+4,y()-3);
                }
                if(x()>210 & x()<=310)
                {
                    setPos(x()+4,y()-1);
                }
                if(x()>310 & x()<=410)
                {
                    setPos(x()+4,y()+1);
                }
                if(x()>410)
                {
                    setPos(x()+4,y()+3);
                }
    }

    if(p->force==7)
    {
                if(x()<=500)
                {

                setPos(x()+5,y()-4);
                }
                if(x()>500 & x()<=600)
                {
                    setPos(x()+5,y()-1);
                }
                if(x()>600 & x()<=700)
                {
                    setPos(x()+5,y()+1);
                }
                if(x()>700)
                {
                    setPos(x()+5,y()+4);
                }
    }





            }




void Player2::move75_5(){


    QList<QGraphicsItem*> colliding=collidingItems();
    for(int i=0,n=colliding.size();i<n;i++)
    {
        if (typeid(*colliding[i])==typeid(R1))
        {scene()->removeItem(this);
        r1->move();
        QGraphicsTextItem* abc=new QGraphicsTextItem;
                            abc->setPlainText(QString("TRY AGAIN"));
                            abc->setScale(4);
                            abc->setPos(280,350);
                            scene2->addItem(abc);
        }


 if (typeid(*colliding[i])==typeid(R2))
                {scene()->removeItem(this);}


                if (typeid(*colliding[i])==typeid(R3))
                {scene()->removeItem(this);
                    QMediaPlayer* m=new QMediaPlayer();

                    m->setMedia(QUrl("qrc:/a/destroy.mp3"));


                    m->play();


                r1->move();
                r1->setPos(800,570);
                QGraphicsTextItem* abc=new QGraphicsTextItem;
                                    abc->setPlainText(QString("TRY AGAIN"));
                                    abc->setScale(4);
                                    abc->setPos(280,350);
                                    scene2->addItem(abc);





                m->stop();
                }}

                // bird movement

                if(p->force==5)
                {
                if(x()<=270)
                {

                setPos(x()+3,y()-4);
                }
                if(x()>270 & x()<=370)
                {
                    setPos(x()+3,y()-1);
                }
                if(x()>370 & x()<=470)
                {
                    setPos(x()+3,y()+1);
                }
                if(x()>470)
                {
                    setPos(x()+3,y()+4);
                }

                }



                if(p->force==3)
                {
                if(x()<=170)
                {

                setPos(x()+2,y()-3);
                }
                if(x()>170 & x()<=270)
                {
                    setPos(x()+2,y()-1);
                }
                if(x()>270 & x()<=370)
                {
                    setPos(x()+2,y()+1);
                }
                if(x()>370)
                {
                    setPos(x()+2,y()+4);
                }
                if(y()>800)
                   { QGraphicsTextItem* abc=new QGraphicsTextItem;
                     abc->setPlainText(QString("TRY AGAIN"));
                     abc->setScale(4);
                     abc->setPos(280,350);
                     scene2->addItem(abc);
}

                }



                if(p->force==7)
                {
                if(x()<=370)
                {

                setPos(x()+3,y()-4);
                }
                if(x()>270 & x()<=370)
                {
                    setPos(x()+3,y()-1);
                }
                if(x()>370 & x()<=470)
                {
                    setPos(x()+3,y()+1);
                }
                if(x()>470)
                {
                    setPos(x()+3,y()+4);
                }

                }


            }







void Player2::move15_5(){


    QList<QGraphicsItem*> colliding=collidingItems();
    for(int i=0,n=colliding.size();i<n;i++)
    {
        if (typeid(*colliding[i])==typeid(R1))
        {scene()->removeItem(this);
        r1->move();
        QGraphicsTextItem* abc=new QGraphicsTextItem;
                            abc->setPlainText(QString("TRY AGAIN"));
                            abc->setScale(4);
                            abc->setPos(280,350);
                            scene2->addItem(abc);}


 if (typeid(*colliding[i])==typeid(R2))
                {scene()->removeItem(this);
     QGraphicsTextItem* abc=new QGraphicsTextItem;
                         abc->setPlainText(QString("TRY AGAIN"));
                         abc->setScale(4);
                         abc->setPos(280,350);
                         scene2->addItem(abc);}


                if (typeid(*colliding[i])==typeid(R3))
                {scene()->removeItem(this);
                    QMediaPlayer* m=new QMediaPlayer();

                    m->setMedia(QUrl("qrc:/a/destroy.mp3"));


                    m->play();


                r1->move();
                r1->setPos(800,570);




                m->stop();
                QGraphicsTextItem* abc=new QGraphicsTextItem;
                                    abc->setPlainText(QString("TRY AGAIN"));
                                    abc->setScale(4);
                                    abc->setPos(280,350);
                                    scene2->addItem(abc);
                }
}






            // bird movement
    if (p->force==5)
    {
            if(x()<=460)
            {

            setPos(x()+6,y()-1);
            }
           if (x()>460)
            {
                setPos(x()+6,y()+1);
            }


        }

    if (p->force==3)
    {
            if(x()<=360)
            {

            setPos(x()+5,y()-1);
            }
           if (x()>360)
            {
                setPos(x()+5,y()+1);
            }


        }


    if (p->force==7)
    {
            if(x()<=560)
            {

            setPos(x()+7,y()-1);
            }
           if (x()>560)
            {
                setPos(x()+5,y()+1);
            }


        }
}
