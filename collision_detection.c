#include "sprite.h"

int collision_detection(Sprite a, Sprite b)
{
    if (a.x < b.x + b.w * 0.75 &&
        a.x + a.w * 0.75 > b.x &&
        a.y < b.y + b.h * 0.75 &&
        a.y + a.h * 0.75 > b.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}