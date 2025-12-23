#include<stdio.h> 
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of lines:");
	scanf("%d",&n);
//	1 2 3 4                        
//	1 2 3 4                                    
//	1 2 3 4
//	1 2 3 4
//	for(i=1; i<=n; i++){              
//		for(j=1; j<=n; j++){
//		printf("%d ",j);
//	}
//	printf("\n");
//}

//A B C D
//A B C D
//A B C D
//A B C D
        for(i=1; i<=n; i++){  
		int a =1;            
		for(j=1; j<=n; j++){
		int d = a + 64;   // d = 65 -->ASCII VALUE
		char ch = (char)d;    // ch = (char)65 -> ch = A
		printf(" %c ",ch);
		a++;
	}
	printf("\n\n");
}
		return 0;
}
