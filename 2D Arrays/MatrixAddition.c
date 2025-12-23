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
	printf("Enter the no of rows: ");
	scanf("%d",&r);
	printf("Enter the no of columns: ");
	scanf("%d",&c);
	int brr[r][c];
	for(i=0; i<r; i++){   //for taking elements
		for(j=0; j<c;j++){
			scanf("%d",&brr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int add[r][c];
	for(i=0; i<r; i++){  //for printing the array
		for(j=0; j<c;j++){
			add[r][c] = arr[i][j] + brr[i][j];
		}
		printf("\n");
	}
	printf("Sum of a Matrix is: ");
	for(i=0; i<r; i++){   //for taking elements
		for(j=0; j<c;j++){
				printf("%d ",add[r][c]);
		}
		printf("\n");
	}

	return 0;
}
