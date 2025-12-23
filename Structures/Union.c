#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef union pokemon{
	int hp;
	int speed;
	int attack;
	char name[15];
} pokemon ;

int main(){
	pokemon pikachu;
	pikachu.hp = 60;
	pikachu.attack = 70;
	pikachu.speed = 100;
	strcpy(pikachu.name,"Pikachu");
	
	printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);

	return 0;
}
