#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct pokemon{
	int hp;
	int speed;
	int attack;
	char name[15];
} pokemon ;
//pass by reference
void  change(pokemon* p){
//	(*p).hp = 70;  //(*p).something = p->something
    p->hp = 70;
    (*p).attack = 80;
    (*p).speed = 110;
    strcpy((*p).name,"Raichu");
    return;
}
int main(){
	pokemon pikachu = {60,70,100,"Pikachu"};
//	pikachu.hp = 60;
//	pikachu.attack = 70;
//	pikachu.speed = 100;
//	strcpy(pikachu.name,"Pikachu");
	
	printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);
	
	change(&pikachu);
	printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);	
	
	return 0;
}
