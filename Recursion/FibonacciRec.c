#include<stdio.h>
#include<conio.h>
int fibo(int n){
	if(n==1 || n==2)  return 1;        
	return fibo(n-1) + fibo(n-2);
}

int main()
{
int n;
printf("Enter any number: ");
scanf("%d",&n);
printf("fibonacci no of %d is %d",n, fibo(n));	
	return 0;
}
