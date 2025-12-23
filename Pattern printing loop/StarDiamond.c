#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter number of lines:");
	scanf("%d",&n);
    int nsp = n/2;    // nsp -> no. of space
	int nst = 1;      // nst -> no. of stars
	int ml = n/2 +1;   // middle length
	for(i=1; i<=n; i++){
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		for(j=1; j<=nst; j++){
			printf("*");
		}
		if(i<ml){
			nsp--;
			nst+=2;
		}
		else{
			nsp++;
			nst-=2;
		}
		printf("\n");
	}
	return 0;
}
