#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem{

private:
    unsigned short score; //score can get bigger then 255

public:
    Score(QGraphicsItem * parent=0);
    void increase();

    void setScore(unsigned short setScore){
        score = setScore;
    }

    template <typename increase, unsigned char plus> //template function && non-type template argument?
    void IncreaseVariably()
{
        score = score+plus;

}

    int getScore(){
       return score;
    }

};

#endif // SCORE_H
