#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Player : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public :
    void keyPressEvent(QKeyEvent * event);
    Player(QGraphicsItem * parent=0);
public slots :
    void spawn();
};


#endif // MYRECT_H
