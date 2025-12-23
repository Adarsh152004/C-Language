#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers:",a,b,c);
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a>b){
		if(c>a){
			printf("a is greater");
		}
		printf("c is greater");
	}
	else{
		printf("b is greater");
	}
	return 0;
}
