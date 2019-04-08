#include <SDL/SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include "perso.h"
#include "perso.c"
int main()
{
SDL_Surface *ecran=NULL;
SDL_Surface *image=NULL;
int continuer=1;
SDL_Rect position;
position.x=0;
position.y=0;
SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(994,694, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    SDL_WM_SetCaption("deplacement", NULL);  
image = IMG_Load("detective.png");

while(continuer==1)
{
SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

deplacement(ecran,image , continuer, position);

SDL_Flip(ecran);
}



SDL_FreeSurface(image);
 SDL_Quit();

    return EXIT_SUCCESS;
}
