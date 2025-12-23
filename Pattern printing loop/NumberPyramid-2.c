#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,s,k;
	printf("Enter number of lines:");
	scanf("%d",&n);  
	//        1
	//      1 2 1
   	//    1 2 3 2 1
	for(i=1; i<=n;i++){       //for lines
		for(s=1; s<=n-i; s++){    //for spaces
			printf(" ");
		}
		for(j=1; j<=i; j++){       //num triangle
			printf("%d",j);
		}
		int a = i - 1;         // i jitna hai usme se ek kam no se start ho rha h numbering
		for(k=1; k<=i-1; k++){    //for 1 //2 1  //3 2 1
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
	return 0;
}
