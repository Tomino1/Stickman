#include "Object.h"
#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>
#include <player.h>
#include <Score.h>




Enemy::Enemy() {

IntMove = 20;

setPos(800,535);
// drew Enemy
setPixmap(QPixmap(":/enemy.png"));

SetEnemyOnScreen(1);
SetGameStatus(1);

// connect
QTimer * timer = new QTimer();
connect(timer,SIGNAL(timeout()), this, SLOT(move()));   //usefull usage of this

timer->start(200); //every 200 ms timeout will be emited - enemy will move slowly to the left

}

void Enemy::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Player)){
            //remove both
            scene() -> removeItem(colliding_items[i]);
            scene() -> removeItem(this);                   //useful usage of this
            // delete them both
            delete colliding_items[i];
            delete this; //destructor
            SetGameStatus(0);
        }


    }

    if(getGameStatus() == 1){          //enemy won't move left anymore if gamestatus is zero - memory
    //move enemy left
    setPos(x() - IntMove, y());
    if (pos(). x() < -100){
        SetEnemyOnScreen(0);
        if (GetEnemyOnScreen() == 0){
        scene()->removeItem(this); //Enemy gets deleted when it moves off screen
        delete this; //destructor and dynamic memory removing
        }
    }
    }
}

Enemy :: ~Enemy(){

}



