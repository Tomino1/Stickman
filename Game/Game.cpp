#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>
#include <QTimer>
#include "Stickmandrawing.h"
#include <QObject>
#include <Game.h>
#include <QGraphicsPathItem>



Game :: Game(QWidget *parent){

// create scene
QGraphicsScene * scene = new QGraphicsScene();

// create item into scene
MyRect * player = new MyRect();



// add stickman to scene

// add item to the scene
scene -> addItem(player);

// make rect focusable
player->setFlag(QGraphicsItem :: ItemIsFocusable);
player->setFocus();

// add a view
QGraphicsView * view = new QGraphicsView(scene);

//show the view
view->show();
view->setFixedSize(800,600);
view->setHorizontalScrollBarPolicy(Qt :: ScrollBarAlwaysOff);
view->setVerticalScrollBarPolicy(Qt :: ScrollBarAlwaysOff);

scene->setSceneRect(0,0,800,600);
player ->setPos(view->width()/2, (view->height())-60);
//spawn enemies
QTimer * timer = new QTimer();
QObject::connect(timer,SIGNAL(timeout()), player, SLOT(spawn()));
timer->start(5000);
}
