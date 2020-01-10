#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <Object.h>

class Player : public Object{
    Q_OBJECT

    unsigned char a;

public :
    void keyPressEvent(QKeyEvent * event);
    Player(QGraphicsItem * parent=nullptr); //specific constructor
    ~Player();

    Player(unsigned char b, unsigned char c); //2 specific constructors
    Player(unsigned char d);




public slots :

    void move();
    void spawn(); //useful member function
};


#endif // MYRECT_H
