#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct pokemon{
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
	//int* x -> address of integer value
	pokemon *x = &pikachu;
	printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",pikachu.name);	
	printf("%p",x);
	return 0;
}
