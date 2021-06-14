#ifndef R4_H
#define R4_H


#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R4:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R4(QGraphicsItem* parent=0);
public slots:
    void move();
    //void delay();

};



#endif // R4_H
