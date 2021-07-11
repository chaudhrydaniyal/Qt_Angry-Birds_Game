#ifndef GAME3_H
#define GAME3_H




#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QObject>
#include<QGraphicsLineItem>
#include<QWidget>

class Game3 : public QGraphicsView
{
public:
    Game3 (QWidget* parent=0);
    QGraphicsScene* scene;


};






#endif // GAME3_H
