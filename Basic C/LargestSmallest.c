#include<stdio.h>
#include<conio.h>
 int main(){
 	int a,b,c,large,small;
 	printf("Enter the three interger num: ");
 	scanf("%d %d %d ",&a,&b,&c);
 	large = (a>b)?((a>c)?a:c):((b>c)?b:c);
 	printf("%d is largest",large);
    small = (a<b)?((a<c)?a:c):((b<c)?b:c);
 	printf("%d is smallest",small);
    	return 0;
 }
