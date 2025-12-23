#include<stdio.h>
#include<conio.h>
int main(){
	struct pokemon{  //uswer defined data types
		int hp;
		int speed;
		int attack;
	};
	struct pokemon pikachu;
	pikachu.attack = 60;
	pikachu.hp = 50;
	pikachu.speed = 100;
	printf("%d",pikachu.attack);
	
	struct pokemon charizard;
	charizard.hp = 70;
	charizard.speed = 90;
	charizard.attack = 90;
	
	return 0;
}
