#include<stdio.h>
int add(int x,int y){   // int is returntype
	return x+y;      // means return integer value
}
int pro(int x,int y){
	return x*y;
}
int modulus(int x,int y){
	return x%y;
}
int divi(int x,int y){
	return x/y;
}
int main()
{
	int a;
	printf("Enter the first no: ");
	scanf("%d",&a);
	int b;
	printf("Enter the second no: ");
	scanf("%d",&b);
	int sum = add(a,b);     // add fnx calling
	int product = pro(a,b);
	int mod = modulus(a,b);
	int div = divi(a,b);
	printf("sum= %d\n",sum);
	printf("product= %d\n",product);
	printf("mod= %d\n",mod);
	printf("div= %d\n",div);
	return 0;
}
