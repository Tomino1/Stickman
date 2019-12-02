#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <Object.h>

class Player : public Object{
    Q_OBJECT

public :
    void keyPressEvent(QKeyEvent * event);
    Player(QGraphicsItem * parent=nullptr); //specific constructor
    ~Player();

    int a,b;
    char s;

    Player(int a, int b); //2 specific constructors
    Player(int b, char s);




public slots :

    void move();
    void spawn(); //useful member function
};


#endif // MYRECT_H
