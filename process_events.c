#include <SDL2/SDL.h>
#include "status.h"
#include "sprite.h"

void ProcessEvents(Status *status, Sprite *player)
{
    SDL_Event e;

    while (SDL_PollEvent(&e))
    {
        if (e.type == SDL_QUIT)
        {
            status->quit = 1;
            return;
        }

        if (e.type == SDL_KEYDOWN)
        {
            if (e.key.keysym.sym == SDLK_ESCAPE)
            {
                status->quit = 1;
            }

            if (status->over)
            {
                return;
            }

            if (e.key.keysym.sym == SDLK_a)
            {
                player->tox = -1;
            }

            if (e.key.keysym.sym == SDLK_d)
            {
                player->tox = 1;
            }

            if (e.key.keysym.sym == SDLK_w)
            {
                player->toy = -1;
            }

            if (e.key.keysym.sym == SDLK_s)
            {
                player->toy = 1;
            }

            if (e.key.keysym.sym == SDLK_SPACE)
            {
            }
        }

        if (e.type == SDL_KEYUP)
        {
            if (e.key.keysym.sym == SDLK_r)
            {
                if (status->over)
                {
                    status->init = 1;
                    return;
                }
            }

            if (status->over)
            {
                return;
            }

            if (e.key.keysym.sym == SDLK_p)
            {
                status->paused = !status->paused;
            }

            if (e.key.keysym.sym == SDLK_a)
            {
                player->tox = 0;
            }

            if (e.key.keysym.sym == SDLK_d)
            {
                player->tox = 0;
            }

            if (e.key.keysym.sym == SDLK_w)
            {
                player->toy = 0;
            }

            if (e.key.keysym.sym == SDLK_s)
            {
                player->toy = 0;
            }

            if (e.key.keysym.sym == SDLK_SPACE)
            {
                status->make_bullet = 1;
            }
        }
    }
}