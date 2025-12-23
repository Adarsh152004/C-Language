#include<stdio.h>
int main()
{
	int a,b,sum,sub,divi,multi;
	printf("Enter the value of first no. :",a);
	scanf("%d",&a);
	printf("Enter the value of second no. :",b);
	scanf("%d",&b);
	sum = a + b;
	sub = a - b;
	divi = a / b;
	multi = a*b;
		printf("addition = %d\n",sum);
			printf("Subtraction = %d\n",sub);
				printf("Division = %d\n",divi);
					printf("Multiplication = %d",multi);
	
	return 0;
}
