#ifndef CHESS_H
#define CHESS_H

/* * * * * * * * * * * * * * * * * * * * *
*   File:     Chess.h
*   Author:   Haodong LI
*   Usage:    basic class of chess
*   Time:     2021-05-30
* * * * * * * * * * * * * * * * * * * * * */

#include <QString>
#include "SGeoPoint.h"
#include <QVector>
#include <unordered_map>

class Chess: public SGeoPoint
{
public:
    Chess(int x = 0, int y = 0,
          const QString name = "", // empty name is illegal
          const bool camp = false, // black is default
          const int number = 0, // 0 is an error number, only 1-5 is legal
          bool alive = true);
    virtual bool isAlive();
    virtual void setAlive(bool isAliveNow);
    virtual bool canKill();
    virtual bool canMove();
    virtual bool chessCamp();
    virtual QString chessName(); // "b_gen_"
    virtual int chessNumber();

    std::unordered_map<QString, SGeoPoint> StepList;

    // virtual void refersh();
    // SGeoPoint Pos;

private:
    SGeoPoint Pos; // no use currently
    const bool _redOrBlack; // true -> red  and  false -> black
    const QString _name;
    const int _number; // sequence
    bool _canMove;
    bool _canKill;
    bool _isAlive;
};

#endif // CHESS_H
