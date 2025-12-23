#include<stdio.h>
#include<conio.h>
int zigzag(int n){
     if(n==0)  return;
     printf(" %d",n);
     zigzag(n-1);
     printf(" %d",n);
     zigzag(n-1);
     printf(" %d",n);
	return;
}

int main()
{
int n;
printf("Enter any number: ");
scanf("%d",&n);
zigzag(n);	
	return 0;
}
