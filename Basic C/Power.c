#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the power:");
	scanf("%d",&b);
	printf("Enter the base:");
	scanf("%d",&a);
	//a=2,b=4 p=2,4,
	int power=1,i;
	for(i=1; i<=a;i++){
	   power = power * b;
}
printf("%d is raised to the power %d is %d",a,b,power);
return 0;
}
