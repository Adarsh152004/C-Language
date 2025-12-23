#include<stdio.h>
#include<conio.h>
int stair(int n){
	if(n==1 || n==2) return 1;
	int TotalWays = stair(n-1) + stair(n-2);
	return TotalWays;
	// stair pe chadhne ke kitne ways hai in one or two steps
}

int main()
{
int n;
printf("Enter any number: ");
scanf("%d",&n);
int ways = stair(n);
printf("%d", ways);	
	return 0;
}
