#ifndef GAME2_H
#define GAME2_H


#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QObject>
#include<QGraphicsLineItem>
#include<QWidget>

class Game2 : public QGraphicsView
{
public:
    Game2 (QWidget* parent=0);
    QGraphicsScene* scene;


};




#endif // GAME2_H
