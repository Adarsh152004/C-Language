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
	if(a>b){ //b is out of race
		if(a>c) 
	printf("%d is the greatest",a);
	else
	printf("%d is the greatest",c);
}
	else {
		if(b>c)
	printf("%d is the greatest",b);
	else
	printf("%d is greatest",c);
}
	return 0;
}
