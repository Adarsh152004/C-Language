#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=1,b=1,sum=1,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1; i<=n-2; i++){
		sum = a + b;
		a = b;
		b = sum;
    } 
	printf("The %dth fibonacci is %d\n",n,sum);
	return 0;
}
