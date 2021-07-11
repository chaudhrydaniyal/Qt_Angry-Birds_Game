#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include<QKeyEvent>
#include<QTime>
#include<QTimer>
class Player:public QObject, public QGraphicsPixmapItem{

    Q_OBJECT

public:
Player(QGraphicsItem * parent=0);
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

/*
void keyPressEvent(QKeyEvent * event);

public slots:

    void spawn();


*/
};
#endif // PLAYER_H
