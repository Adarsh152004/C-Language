#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	//Ternary Operator
	n%2==0 ? printf("Given number is even") : printf("Given number is odd");
	return 0;
}


