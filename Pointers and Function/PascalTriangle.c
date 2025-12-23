#include<stdio.h>
int factorial(int n){
	int fact=1,i;
	for(i=1; i<=n;i++){
	     fact=fact*i;
	}
    return fact;
}
int combination(int n, int r){   
	int nCr = factorial(n)/(factorial(r)*factorial(n-r));  // calling factorial fnx
    return nCr;
}
int main(){
	int n,r,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		for(j=1; j<=n-i; j++){
			printf("  ");
		}
		for(j=0; j<=i; j++){
			int iCj = combination(i,j);   // calling combination fnx
			printf(" %d ",iCj);
		}
		printf("\n");
	}
//void printPascal(int n) 
//{ 
//int line,space;
//    for(line = 1; line <= n; line++) { 
//        for ( space = 1; space <= n - line; space++) 
//            printf("  "); 
//        // used to represent C(line, i) 
//        int coef = 1,i; 
//        for ( i = 1; i <= line; i++) { 
//            // The first value in a line 
//            // is always 1 
//            printf("%4d", coef); 
//            coef = coef * (line - i) / i; 
//        } 
//        printf("\n"); 
//    } 
//} 
//  
//// Driver code 
//int main() 
//{ 
//    int n = 5; 
//    printPascal(n); 
	return 0;
}
