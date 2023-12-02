#include "sprite.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

Sprite Sprite_New(int x, int y, int w, int h, char *data, int max_w, int max_h)
{
    Sprite sprite;
    sprite.x = x;
    sprite.y = y;
    sprite.w = w;
    sprite.h = h;
    sprite.score = 0;
    sprite.life = 1;
    sprite.blood = 1;
    sprite.attack = 1;
    sprite.value = 1;
    sprite.tox = 0;
    sprite.toy = 0;
    sprite.speed = 1;
    sprite.data = data;
    sprite.can_out_screen = 1;
    sprite.max_w = max_w;
    sprite.max_h = max_h;
    return sprite;
}