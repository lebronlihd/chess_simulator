#include "Horse.h"

Horse::Horse(int x, int y, QString name, bool camp, int number, bool isAlive):
    Chess(x, y, name, camp, number, isAlive)
{

}

double Horse::space_value() {
    return 0;
}

bool Horse::canChessMove() {
    return true;
}

void Horse::generateMove() {

}
