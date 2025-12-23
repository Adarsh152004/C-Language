#include<stdio.h>
void swap(int *x, int *y){
	int temp;
	temp = *x;  //temp=2
	*x = *y;   // *x -> a=9
	*y = temp;  // *y -> b=2
	return;	
}
int main(){
	int a;  // let a=2
	printf("Enter a: ");
	scanf("%d",&a);
	int b;  // let b=9
	printf("Enter b: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("The value of a is %d\n",a);
	printf("The value of b is %d",b);
	return 0;
}
