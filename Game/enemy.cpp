#include "Object.h"
#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>


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
    //move enemy left
    setPos(x() - IntMove, y());
    if (pos(). x() < -100){
        scene()->removeItem(this); //Enemy gets deleted when it moves off screen
        delete this; //destructor and dynamic memory removing
    }
}
