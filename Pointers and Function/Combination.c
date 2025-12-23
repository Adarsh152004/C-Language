#include<stdio.h>
int factorial(int x){
	int fact=1,i;
	for(i=1; i<=x; i++){
		fact = fact*i;
	}
	return fact;
}
int main(){
	int n,r;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter r: ");
	scanf("%d",&r);
	int nfact = factorial(n);  //n!
	int rfact = factorial(r);  //r!
	int nrfact = factorial(n-r);  //(n-r)!
	int nCr = nfact / (rfact * nrfact);
	printf("nCr = %d",nCr);
	return 0;
}

