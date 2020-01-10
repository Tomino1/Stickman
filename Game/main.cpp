#include <QApplication>
#include <QGraphicsScene>
#include "Player.h"
#include <QGraphicsView>
#include <QTimer>
#include <Game.h>



int main(int argc, char *argv[])
{   
    Game * game;
    QApplication a(argc, argv);
    game = new Game();
    return a.exec();
}
