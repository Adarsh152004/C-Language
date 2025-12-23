#include<stdio.h>
#include<conio.h>
int main(){
	int i,marks[10] =	{95,90,31,25,100,50,65,89,97,30} ;
	for(i=1; i<10; i++){
		if(marks[i]<35){
			printf("The students whose mark is less than 35 is %d\n ",i);
		}
	}
	return 0;
}
