#ifndef R6_H
#define R6_H



#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R6:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R6(QGraphicsItem* parent=0);
    void move();
};



#endif // R6_H
