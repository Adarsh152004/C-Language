#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	scanf("%d",&a);
	char ch;
	scanf("%c",&ch);
	int b;
	scanf("%d",&b);
	switch(ch){
		case '+':
		printf("%d",a+b);
		break;
		case '-':
		printf("%d",a-b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		case '/':
		printf("%f",(float)a/b);
		break;
	} 
	return 0;
}
