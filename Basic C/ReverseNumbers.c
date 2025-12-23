#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r=0;
	printf("Enter the number:");
	scanf("%d",&n);
	//1234 r=r*10; r=r +n%10
	while(n>0){
		r = r + n%10;
		r = r*10;
		n = n/10;
	}
	r = r/10;
	printf("The reversed no is is %d ",r);
	return 0;
}
