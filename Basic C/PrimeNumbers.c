#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=2;
	printf("enter any number: ");
	scanf("%d",&n);
	while(n%i!=0)
	{
		i++;
    }
	if(i==n)
	{
	printf("prime number");
    }
	else
	{
	printf("not a prime number");
    }
	return 0;
}
