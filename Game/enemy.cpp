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

// connect
QTimer * timer = new QTimer();
connect(timer,SIGNAL(timeout()), this, SLOT(move()));

timer->start(200); //every 200 ms timeout will be emited - enemy will move slowly to the left

}

void Enemy::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Player)){
            //remove both
            scene() -> removeItem(colliding_items[i]);
            scene() -> removeItem(this);
            // delete them both
            delete colliding_items[i];
            delete this; //destructor
            return; //makes sure the code below doesn't try to run after the item is destroyed
        }


    }

    //move enemy left
    setPos(x() - IntMove, y());
    if (pos(). x() < -100){
        scene()->removeItem(this); //Enemy gets deleted when it moves off screen
        delete this; //destructor and dynamic memory removing
    }
}
