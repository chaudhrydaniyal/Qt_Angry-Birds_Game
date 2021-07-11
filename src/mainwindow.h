#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QObject>
#include<QGraphicsLineItem>
#include<QWidget>

class Game : public QGraphicsView
{
public:
    Game (QWidget* parent=0);
    QGraphicsScene* scene;


};

#endif // MAINWINDOW_H
