#ifndef R1_H
#define R1_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R1:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R1(QGraphicsItem* parent=0);
public slots:
    void move();
    void delay();

};
#endif // R1_H
