#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter any number:");
	scanf("%d",&n);
	//1 3 5 7 9 
	for(i=1 ; i<=2*n-1; i=i+2)
	{
		printf("%d ",i);
	}
	getch();
}
