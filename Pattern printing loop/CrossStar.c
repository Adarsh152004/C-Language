#include<stdio.h>
#include<conio.h>
int main()
{
	//*   *
	//  *
	//*   *
	int n,i,j;
	printf("Enter the number of lines: ");           
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j==i || i+j == n+1)
			printf("I Love You");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
