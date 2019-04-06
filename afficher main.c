#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "g.h"

   

int main(){
perso p;
initialiser_joueur(&p);
 Display_perso (p);
SDL_FreeSurface(p.screen);
SDL_FreeSurface(p.image);
SDL_Quit();

return 0;
}
