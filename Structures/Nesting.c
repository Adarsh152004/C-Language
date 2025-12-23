#include<stdio.h>
#include<conio.h>
int main(){
	typedef struct pokemon{
		int hp;
		int speed;
		int attack;
		char tier;
		char name[20];
	} pokemon;
	
	typedef struct legendarypokemon{
		pokemon normal;  //Nesting
		char ability[10];
	} legendarypokemon ;
	
	legendarypokemon mewtwo;
	strcpy(mewtwo.ability, "pressure");
	mewtwo.normal.hp = 150;  //accessing datas of pokemon by .normal
	mewtwo.normal.speed = 180;
	mewtwo.normal.attack = 190;
	strcpy(mewtwo.normal.name,"Mewtwo");
	
	return 0;
}
