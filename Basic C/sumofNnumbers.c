#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++){
		sum = sum + i;
	}
	printf("sum is %d",sum);
	return 0;
}
