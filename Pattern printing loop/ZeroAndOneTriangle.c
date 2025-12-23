#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	int a;
	for(i=1; i<=n; i++){
		//if(i%2!=0) a=1;
		//else a=0;
		for(j=1; j<=i; j++){
			if((i+j)%2==0)  printf(" 1 ");
			else  printf(" 0 ");
			//if(a==0) a=1;
			//else  a=0;
		//	printf("%d ",a);
		}
		printf("\n");
	}
	return 0;
}
