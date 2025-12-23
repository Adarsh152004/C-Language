#include<stdio.h>
#include<conio.h>
int decreasing(int n){
	if(n==0)  return;     // base case
	printf("%d\n\n",n);     // code
	decreasing(n-1);      // call
	printf("%d\n\n",n);   // recursion after call 
	
	return;
}

int main()
{
int n;
printf("Enter any number: ");
scanf("%d",&n);
decreasing(n);	
	return 0;
}
