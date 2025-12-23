#include<stdio.h>
int min(int x, int y){
	if(x<y) return x;
	else return y;
}
int gcd(int x, int y){
    int hcf,i;
	for(i=1; i<=min(x,y); i++){
		if(x%i==0 && y%i==0 ){
			hcf=i;
		}
	} 
	return hcf;
}
int main(){
	int a;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	int b;
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	int hcf = gcd(a,b);
	printf("The HCF/GCD of %d and %d is: %d",a,b,hcf);
	return 0;
}
