#include<stdio.h>
#include<conio.h>
//global declaration of structure to access the functions variable
//global means declare outside main() function

typedef struct pokemon{
		int hp;
		int speed;
		int attack;
		char tier;
		char name[15];
	} pokemon;
int fun (pokemon p){
	printf("%d",p.hp);
	return;
}
int main(){
	//Structure is a pass by value
	pokemon pikachu;
	pikachu.hp = 60;
	fun(pikachu);
	return 0;
}
