#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n;
	printf("Enter any number:");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d\n",n * i);
	i++;
	}
	return 0;
}
