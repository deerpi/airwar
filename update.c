#include "status.h"
#include "sprite.h"

void update_sprite(Sprite *sprite)
{
    sprite->x += sprite->tox * sprite->speed;
    sprite->y += sprite->toy * sprite->speed;
    if (sprite->can_out_screen)
    {
        if (sprite->x < 0 && sprite->tox < 0)
        {
            sprite->life -= 1;
        }
        if (sprite->x + sprite->w > sprite->max_w && sprite->tox > 0)
        {
            sprite->life -= 1;
        }
        if (sprite->y < 0 && sprite->toy < 0)
        {
            sprite->life -= 1;
        }
        if (sprite->y + sprite->h > sprite->max_h && sprite->toy > 0)
        {
            sprite->life -= 1;
        }
    }
    else
    {
        if (sprite->x < 0)
        {
            sprite->x = 0;
            sprite->tox = 0;
        }
        if (sprite->x + sprite->w > sprite->max_w)
        {
            sprite->x = sprite->max_w - sprite->w;
            sprite->tox = 0;
        }
        if (sprite->y < 0)
        {
            sprite->y = 0;
            sprite->toy = 0;
        }
        if (sprite->y + sprite->h > sprite->max_h)
        {
            sprite->y = sprite->max_h - sprite->h;
            sprite->toy = 0;
        }
    }
}