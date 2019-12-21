#include "Player.h"
#include "QGraphicsScene"
#include <QKeyEvent>
#include "Bullet.h"
#include "Object.h"
#include "QGraphicsItem"
#include "QTimer"
#include <Enemy.h>


Player :: ~Player() //destructor
{}

Player :: Player(QGraphicsItem *parent){
setPixmap(QPixmap(":/shooting.png"));
    IntMove = 5;
    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

    timer->start(10); //every 20 ms timeout will be emited - Player falls
}

void Player :: move(){

    if (pos(). y() < 540 && pos().y() > -1){
        //gravity
        setPos(x(), y()+IntMove);
    }

}

void Player::keyPressEvent(QKeyEvent *event)
{

    if (event->key() == Qt::Key_Left){
        if(pos().x() > 0)                     // player can't move off screen on the left
        setPos(x()-10,y());

    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)           // player can't move off screen on the right
        setPos(x()+10,y());
}

    else if (event->key() == Qt :: Key_Space){
        //create bullet
        Bullet * bullet = new Bullet();
        bullet -> setPos(x()+60,y()+5);       // bullet spawns at the end of stickmans gun
        scene() -> addItem(bullet);
    }
    else if (event->key() == Qt :: Key_Up){
        if (pos().y() > 0)
            setPos(x(),y()-200);
}

        else if (event->key() == Qt :: Key_Down){
            if (pos().y() < 540)
                setPos(x(),y()+10);
    }
}

void Player::spawn() //moet in game staan
{
    //create enemy
   Enemy * enemy = new Enemy(); // dynamic memory allocation
   scene() ->addItem(enemy);
}

