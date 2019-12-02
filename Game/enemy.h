#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <Object.h>

class Enemy : public Object{

public :
    Enemy(); //default constructor

public slots :
    void move();




};






#endif // ENEMY_H
