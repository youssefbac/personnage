#include "perso.h"

void initialiser_joueur(perso *p);
void vie(perso *p);
void animate_right(perso *p);				
void animate_left(perso *p);
void animate_up(perso *p);		
void animate_down(perso *p);
void animate_jump (perso*p);
void Display_perso (perso p,SDL_Rect position,SDL_Surface *screen);
