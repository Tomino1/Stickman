#ifndef MovingObject_H
#define MovingObject_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Object : public QObject, public QGraphicsPixmapItem{ //abstract base class & multiple inheritance
    Q_OBJECT

public:
    int IntMove; //useful
    Object(); //default constructor

public slots:
    virtual void move() = 0;


};

#endif // ENEMY_H
