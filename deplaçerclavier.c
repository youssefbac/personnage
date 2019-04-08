#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
/*
#include <SDL/SDL_rotozoom.h>
*/
#define TEMPS       30 // Le temps qu'il y a entre chaque augmentation de l'angle.

int verifier_position(SDL_Rect Position_joueur,SDL_Rect Position_curseur)
{
	int verif,i;
	Position_curseur.x=End.motion.x;
	Position_curseur.y=End.motion.y;
	printf("Pos.x: %d\n",Position_curseur.x);
	printf("Pos.y: %d\n",Position_curseur.y);
	if((Position_curseur.x < Position_joueur.x+204)&&(Position_curseur.x > Position_joueur.x-120)){
		if((Position_curseur.y < Position_joueur.y+215)&&(Position_curseur.y > Position_joueur.y -120)){
			verif=1;
		}
		else verif=0;
	}
	else verif=0;
	printf("%d \n",verif );
	return verif;
}

SDL_Rect deplacer(SDL_Rect Position_joueur,SDL_Rect Position_curseur){
    int pos;
    if((Position_curseur.x > Position_joueur.x )&&(Position_curseur.y < Position_joueur.y)){
        pos=1;
    }
    else if((Position_curseur.x > Position_joueur.x )&&(Position_curseur.y > Position_joueur.y)){
        pos=2;
    }
    else if((Position_curseur.x < Position_joueur.x )&&(Position_curseur.y > Position_joueur.y)){
        pos=3;
    }
    else if((Position_curseur.x < Position_joueur.x )&&(Position_curseur.y < Position_joueur.y)){
        pos=4;
    }

	                       if(pos==1){
int i;
                            for(i=0;i<3;i++){
                                Position_joueur.x+=4;
                                Position_joueur.y-=2;
                            }
                       }
                       else if(pos==2){
                            for(i=0;i<3;i++){
                                Position_joueur.x+=4;
                                Position_joueur.y+=2;
                            }
                       }
                       else if(pos==3){
                            for(i=0;i<3;i++){
                                Position_joueur.x-=4;
                                Position_joueur.y+=2;
                            }
                       }
                       else if(pos==4){
                            for(i=0;i<3;i++){
                                Position_joueur.x-=4;
                                Position_joueur.y-=2;
                            }
                       }
	return Position_joueur;
}

SDL_Rect deplacer(SDL_Rect Position_joueur,int pos)
{

	if(pos==1)
	{
		Position_joueur.y-=4;
	}

	else if(pos==2)

	{
		Position_joueur.y+=4;
	}

	else if(pos==3)

	{
		Position_joueur.x-=4;
	}

	else if(pos==4)

	{
		Position_joueur.x+=4;
	}
	return Position_joueur;
}
