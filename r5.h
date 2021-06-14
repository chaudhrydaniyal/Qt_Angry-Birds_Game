#ifndef R5_H
#define R5_H


#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R5:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R5(QGraphicsItem* parent=0);
public slots:
    void move();
    //void delay();

};





#endif // R5_H
