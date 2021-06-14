#ifndef R8_H
#define R8_H


#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R8:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R8(QGraphicsItem* parent=0);
public slots:
    void move();


};




#endif // R8_H
