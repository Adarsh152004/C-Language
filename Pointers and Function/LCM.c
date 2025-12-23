#include<stdio.h>
#include<conio.h>
int LCM(int n1,int n2){
	int lcm;
	if(n1>n2)  lcm = n1;
	else  lcm = n2;
	while(lcm % n1 != 0  || lcm % n2 != 0){
		lcm++;
	}
		printf("LCM is %d",lcm);
	return;
}
int main(){
	int n1,n2;
	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);
	LCM(n1,n2);
	return 0;
}
