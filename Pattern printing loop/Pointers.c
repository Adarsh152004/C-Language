#include<stdio.h>
int main(){
	int a;
	printf("Enter a: ");
	int* x=&a;
	printf("%p\n",*x);  //%p address print krta h
	return 0;
}
