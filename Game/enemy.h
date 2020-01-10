#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <Object.h>

class Enemy : public Object{

private :
    bool EnemyOnScreen; //usefulbool 1
    bool GameStatus;    //usefulbool 2

public :
    Enemy(); //default constructor
    ~Enemy(); //destructor

    bool GetEnemyOnScreen(){
      return EnemyOnScreen;
    }
    // Getter
    void SetEnemyOnScreen(bool setLife = 0) { //defalt value in function definition && usefulbool4
      EnemyOnScreen = setLife;
    }

    void SetGameStatus(bool Status){    //usefulbool 3
      GameStatus = Status;
    }

    bool getGameStatus(){
      return GameStatus;
    }


public slots :
    void move();

};






#endif // ENEMY_H
