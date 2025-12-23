#include<stdio.h>
#include<conio.h>
int main(){
	typedef struct pokemon{  //typedef turns A into a structure
		int hp;
		int speed;
		int attack;
	} A;
	A pikachu;
	pikachu.attack = 60;
	pikachu.hp = 50;
	pikachu.speed = 100;
	printf("%d",pikachu.attack);
	
	A charizard;
	charizard.hp = 70;
	charizard.speed = 90;
	charizard.attack = 90;
	
	return 0;
}
