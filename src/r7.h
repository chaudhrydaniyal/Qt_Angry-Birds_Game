#ifndef R7_H
#define R7_H

#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R7:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R7(QGraphicsItem* parent=0);
public slots:
    void move();


};

#endif // R7_H
