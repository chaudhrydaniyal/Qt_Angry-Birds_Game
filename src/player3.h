#ifndef PLAYER3_H
#define PLAYER3_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<QKeyEvent>
#include<QTime>
#include<QTimer>
class Player3:public QObject, public QGraphicsPixmapItem{

    Q_OBJECT

public:
Player3(QGraphicsItem * parent=0);
void keyPressEvent(QKeyEvent *event);
QTime myTimer;
int xseconds;
int yseconds;
QTimer* timer = new QTimer();


public slots:

void move45_5();
void move30_5();
void move60_5();
void move75_5();
void move15_5();


};




#endif // PLAYER3_H
