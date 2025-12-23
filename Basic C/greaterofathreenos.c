#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter first no:");
	scanf("%d",&a);
	printf("enter second no:");
	scanf("%d",&b);
	printf("enter third no:");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("%d is the greatest",a);
	if(b>a && b>c)
	printf("%d is the greatest",b);
	if(c>a && c>b)
	printf("%d is the greatest",c);
	return 0;
	
}
