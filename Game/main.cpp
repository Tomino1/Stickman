#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>
#include <QTimer>
#include <Game.h>

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new Game();
    return a.exec();



}
