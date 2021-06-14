#ifndef R9_H
#define R9_H



#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R9:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R9(QGraphicsItem* parent=0);
    void move();
};



#endif // R9_H
