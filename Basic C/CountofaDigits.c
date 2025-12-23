#include<stdio.h>
#include<conio.h>
int main()
{
	int n,count=0;
	int sum = 0,lastdigit=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n>0)
	{
		//n = n/10;
		//count++;
		lastdigit=n%10;
		sum = sum + lastdigit;
		n = n/10;
	}
	//printf("The no of digits are %d",count);
	printf("Sum of a digit is %d ",sum);
	return 0;
}
