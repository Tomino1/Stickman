#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <MyRect.h>

class Game: public QGraphicsView{
public:

    Game(QWidget * parent=0);

    MyRect * Player;

};

#endif // GAME_H
