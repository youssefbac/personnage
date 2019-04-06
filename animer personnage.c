#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>





void initialiser_joueur(perso *p)
{
	p->frame.y = 0;
	p->frame.x = 0;
	p->frame.w = 35;
	p->frame.h = 100;
	p->vi = 5;
	
	
}

void vie(perso *p)
{
	p->vi--;
}


void animate_right(perso *p)
{
				p->frame.y=100;
				p->frame.x +=35;
				if (p->frame.x == 630 ){
						p->frame.x = 0;
						}
				SDL_Delay(28);	
			}	
					
void animate_left(perso *p)
{
				p->frame.y=300;
				p->frame.x +=35;
				if (p->frame.x == 630 ){
						p->frame.x = 0;
						}
					SDL_Delay(28);
}

void animate_up(perso *p)
{
				p->frame.y=0;
				p->frame.x +=35;
				if (p->frame.x == 630 ){
						p->frame.x = 0;
						}
				    	 
				    

			SDL_Delay(28);	
			}	
					
void animate_down(perso *p)
{
				p->frame.y=200;
				p->frame.x +=35;
				if (p->frame.x == 630 ){
						p->frame.x = 0;
						}
					SDL_Delay(28);
}
	
void animate_jump (perso*p)
{
	int i ;
	
    
    if (p->frame.x == 0 )
    {
	    p->frame.x = 72;
	}	
	SDL_Delay(28);
} 

	void Display_perso (perso p,SDL_Rect position,SDL_Surface *screen)
{
	
		
		SDL_BlitSurface(p.image, &p.frame, screen, &position);
		SDL_Flip( screen );
	    
}

