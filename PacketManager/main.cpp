#include <SDL2/SDL.h>
//#include <SDL2/SDL_ttf.h>
#include <iostream>

int main(int argc, char ** argv)
{
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);
    //TTF_Init();


    SDL_Window * window = SDL_CreateWindow("SDL_ttf in SDL2",
                                           SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640,
                                           480, 0);
    SDL_Renderer * rend = SDL_CreateRenderer(window, -1, 0);



    //TTF_Font * font = TTF_OpenFont("mistral.ttf", 25);

    SDL_Color rgb = { 131, 1, 137 };


    //SDL_Surface *surf = TTF_RenderText_Solid(font, "We're incompetent", rgb);

    //SDL_Texture *tex = SDL_CreateTextureFromSurface(rend, surf);

    while (!quit)
    {
        SDL_WaitEvent(&event);

        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }

        //SDL_RenderCopy(rend, tex, NULL, NULL);
        SDL_RenderPresent(rend);
    }

    //SDL_DestroyTexture(tex);
    //SDL_FreeSurface(surf);

    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(window);

    //TTF_CloseFont(font);
    //TTF_Quit();
    SDL_Quit();

    return 0;
}