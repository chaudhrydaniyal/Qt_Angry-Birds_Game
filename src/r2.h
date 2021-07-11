#ifndef R2_H
#define R2_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class R2:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    R2(QGraphicsItem* parent=0);
public slots:
    void move();

};
#endif // R2_H
