#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <Object.h>

class Bullet : public Object{
public:
    Bullet(QGraphicsItem * parent=nullptr); //specific constructor
public slots :
    void move();

};

#endif // BULLET_H
