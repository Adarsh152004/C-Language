#include<stdio.h>
#include<conio.h>
int main()
{
	//1
	//2 3
	//4 5 6
	int n,i,j;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	int a=1;
	for(i=1; i<=n; i++){
		char ch = (char)(a+64);
		for(j=1; j<=i; j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
