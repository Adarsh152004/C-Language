#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
	if(b==0)  return a;
	else{
		if(a<b)  return gcd(b,a);
		else  return gcd(b,a%b);
	}
}
int main()
{
	int num1,num2,GCD;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	GCD = gcd(num1,num2);
	printf("GCD of %d and %d is %d",num1,num2,GCD);
	return 0;
}
