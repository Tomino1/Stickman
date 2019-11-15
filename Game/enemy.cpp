#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>
#include <stdlib.h> //rand()

Enemy::Enemy() : QObject(), QGraphicsPixmapItem(){

    //set random position

    setPos(800,535);

    // drew Enemy
    setPixmap(QPixmap(":/enemy.png"));

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50); //every 50 ms timeout will be emited - bullet will move

}

void Enemy::move()
{
    //move enemy left
    setPos(x() - 5, y());
    if (pos(). x() < -100){
        scene()->removeItem(this); //Enemy gets deleted when it moves off screen
        delete this;
    }
}
