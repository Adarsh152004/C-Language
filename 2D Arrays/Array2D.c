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
	for(i=0; i<r; i++){   //for taking elements
		for(j=0; j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<r; i++){  //for printing the array
		for(j=0; j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
