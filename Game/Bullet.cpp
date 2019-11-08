#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <Enemy.h>

Bullet::Bullet(){
    // drew bullet
    setRect(0,0,10,10);

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50); //every 50 ms timeout will be emited - bullet will move

}

void Bullet::move()
{
    // if bullet collides with enemy - destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Enemy)){
            //remove both
            scene() -> removeItem(colliding_items[i]);
            scene() -> removeItem(this);
            // delete them both
            delete colliding_items[i];
            delete this;
            return; //makes sure the code below doesn't try to run after the item is destroyed
        }


    }

    //move bullet to the right
    setPos(x() + 10, y());
    if (pos().x() > 800){
        scene()->removeItem(this); //bullet gets deleted when it moves off screen
        delete this;
    }
}
