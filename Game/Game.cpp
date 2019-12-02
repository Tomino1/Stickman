#include <QApplication>
#include <QGraphicsScene>
#include "Player.h"
#include <QGraphicsView>
#include <QTimer>
#include "Stickmandrawing.h"
#include <QObject>
#include <Game.h>
#include <QGraphicsPathItem>



Game :: Game(QWidget *parent){



Player *c1= new Player();       //dynamic memory allocation
delete c1;                      //dynamic memory removing

// create scene
QGraphicsScene * scene = new QGraphicsScene();

// add stickman to scene
Player * player = new Player();

// add item to the scene
scene -> addItem(player);

// make stickman focusable
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
QObject::connect(timer,SIGNAL(timeout()), this, SLOT(action()));
timer->start(5000);
}
