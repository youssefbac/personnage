#include <stdio.h>
#include "SDL/SDL.h"
#include <stdlib.h>
#include "jeu.h"

void initialiserpersonnage(){
int m_vie;
int m_score;
SDL_Rect positionperso;

positionperso.x = 500;   
positionperso.y =300;     
direction = 1;
 m_vie=0;
 m_score=0;
img= IMG_Load ("zelda.png");

}

/*
void afficher(SDL_Surface* ecran){
SDL_Surface *perso[4]={NULL};
SDL_Surface *persoactuel=NULL;
SDL_Event event;
SDL_Rect posperso;
int continuer=1;
int i=0,j=0;
perso[BAS]=IMG_Load("zelda.png");
persoactuel=perso[BAS];
SDL_Rect pos;
posperso.x=3;
posperso.y=3;
while (continuer){
SDL_WaitEvent(&event);
switch(event.type){

case SDL_QUIT:
continuer=0;
break;
case SDL_KEYDOWN:
switch(event.key.keysym.sym){
case SDLK_ESCAPE:
continuer=0;
break;
case SDLK_UP:
depalcerperso(&pos,HAUT);
break;
case SDLK_DOWN:
depalcerperso(&pos,BAS);
break;
case SDLK_RIGHT:
depalcerperso(&pos,DROIT);
break;
case SDLK_LEFT:
depalcerperso(&pos,GAUCHE);
break; 
}
break;
} 
SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255)); 
SDL_Blitsurface(persoactuel,NULL,ecran,&pos);
SDL_Flip(ecran);
}

SDL_EnablekeyRepeat(0,0);

for(i=0;i<4;i++){
SDL_FreeSurface(perso[i]);

}

}

void deplacerperso(SDL_Rect *pos,int direction){
switch(direction){
case HAUT:
pos->y--;
break;
 
case BAS:
pos->y--;
break;
case GAUCHE:
pos->y--;
break;
case DROIT:
pos->y--;
break;
}

}
