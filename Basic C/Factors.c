#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n;
	printf("Enter any number:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0)
		printf("%d ",i);
		i++;
	}
return 0;
}
