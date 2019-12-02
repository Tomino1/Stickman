#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <Player.h>
#include <Stickmandrawing.h>

class Game: public QGraphicsView{
public:

    Game(QWidget * parent=nullptr); //nullptr because of readability + can only be implicitly converted to pointer type


};

#endif // GAME_H
