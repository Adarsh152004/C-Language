#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c;
	printf("Enter the no of rows: ");
	scanf("%d",&r);
	printf("Enter the no of columns: ");
	scanf("%d",&c);
	int i,j,arr[r][c];
	for(i=0; i<r; i++){   
		for(j=0; j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<c; i++){  
		for(j=0; j<r;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
