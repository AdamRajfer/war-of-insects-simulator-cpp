#include "position.h"

position::position(int xx, int yy)
{
    x = xx;
    y = yy;
}

position::~position()
{
    x = 0;
    y = 0;
}

int position::getX()
{
    return x;
}

int position::getY()
{
    return y;
}

void position::addToPosition(int dx, int dy)
{
    x += dx;
    y += dy;
}

void position::setPosition(int xx, int yy)
{
    x = xx;
    y = yy;
}
