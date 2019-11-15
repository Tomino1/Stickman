#include "MyRect.h"
#include "QGraphicsScene"
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"
#include "QGraphicsItem"

void MyRect::keyPressEvent(QKeyEvent *event)
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
        bullet -> setPos(x()+55,y());       // bullet spawns at the end of stickmans gun
        scene() -> addItem(bullet);
    }
}

void MyRect::spawn()
{
    //create enemy
    Enemy * enemy = new Enemy();
    scene() ->addItem(enemy);
}

