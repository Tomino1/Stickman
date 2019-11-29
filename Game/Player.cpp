#include "Player.h"
#include "QGraphicsScene"
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"
#include "QGraphicsItem"
#include "QTimer"

Player :: Player(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent){
setPixmap(QPixmap(":/shooting.png"));
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
            setPos(x(),y()-100);
}

        else if (event->key() == Qt :: Key_Down){
            if (pos().y() < 540)
                setPos(x(),y()+10);


    }
}

void Player::spawn()
{
    //create enemy
    Enemy * enemy = new Enemy();
    scene() ->addItem(enemy);
}

