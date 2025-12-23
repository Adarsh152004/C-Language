#include<stdio.h>
int main()
{
int a,b, remainder;
	printf("enter the first no. :",a);
	scanf("%d",&a);
	printf("enter the second no. :",b);
	scanf("%d",&b);
	
	remainder = a % b;
	printf("Remainder = %d",remainder);
	return 0;
}
