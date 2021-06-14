#ifndef R3_H
#define R3_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R3:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R3(QGraphicsItem* parent=0);
    void move();
};

#endif // R3_H
