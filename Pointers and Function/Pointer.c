#include<stdio.h>
int main(){
	int a;
	printf("Enter a: ");
	scanf("%d",&a);
	int *x=&a;       //%p address print krta h
	// *x=7 ->  valua of a is changed
	printf("%d\n",*x);   //x ke address pe kya value h vo print karega
	printf("%p\n",x);    //print address of x
	printf("%p",&x);    //print address of a
	return 0;
}
