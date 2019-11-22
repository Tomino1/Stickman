#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>
#include <QObject>

class MyRect : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public :
    void keyPressEvent(QKeyEvent * event);
    MyRect(QGraphicsItem * parent=0);
public slots :
    void spawn();
};


#endif // MYRECT_H
