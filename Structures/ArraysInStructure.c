#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	typedef struct pokemon{  
		int hp;
		int speed;
		int attack;
		char name[15];
	} pokemon;
	
	pokemon arr[3]; //arr[0], arr[1],.... arr[2]
	arr[0].attack = 50;
	arr[0].hp = 100;
	arr[0].speed = 30;
	strcpy(arr[0].name, "charizard");
     
    arr[1].attack = 150;
	arr[1].hp = 100;
	arr[1].speed = 130;
	strcpy(arr[1].name, "mewtwo");
	
    arr[2].attack = 80;
	arr[2].hp = 30;
	arr[2].speed = 90;
	strcpy(arr[2].name, "pikachu");
	
	int i;
	for(i=0; i<=2; i++){
		printf("%s\n",arr[i].name);
        printf("attack = %d\n",arr[i].attack);
        printf("hp = %d\n",arr[i].hp);
        printf("speed = %d\n",arr[i].speed);
        printf("\n");
	}

	return 0;
}
