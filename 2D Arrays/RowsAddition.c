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
	int A,summax=0;
	printf("Enter what row sum should done: ");
	scanf("%d",&A);
	  //for printing the array
		for(j=0; j<c; j++){
			summax += arr[A][j];
		}
	printf("Sum of %d row is %d ",A,summax);
	return 0;
}
