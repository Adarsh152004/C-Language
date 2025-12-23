#include<stdio.h>
#include<conio.h>
int main()
{
	// here, for multiplication n = p 
	// result order m * q
	int m,n;
	printf("Enter the no of rows of 1st matrix:  ");
	scanf("%d",&m);
	printf("Enter the no of columns of 1st matrix: ");
	scanf("%d",&n);
	int i,j,arr[m][n];
	printf("Enter the elements of 1st matrix:\n");
	for(i=0; i<m; i++){   //for taking elements
		for(j=0; j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	
	int p,q;
	printf("Enter the no of rows of 2nd matrix: ");
	scanf("%d",&p);
	printf("Enter the no of columns of 2nd matrix: ");
	scanf("%d",&q);
	int brr[p][q]; 
	printf("Enter the elements of 1st matrix:\n");
	for(i=0; i<p; i++){   //for taking elements
		for(j=0; j<q;j++){
			scanf("%d",&brr[i][j]);
		}
	}
	if(n!=p){
		printf("The matrix cannot be multiplied");
	}
	else{
	  //Multiplication
	int res[m][q];
	int k;
	for(i=0; i<m; i++){
		for(j=0; j<q;j++){
			//i row of arr[][] and j column of brr[][]
			//(a[i][0],a[i][1],a[i][2],.....) * (b[0][j],b[1][j],b[2][j],.....)
		     res[i][j] = 0;
			 for(k=0; k<n;k++){
			 	res[i][j] += arr[i][k] * brr[k][j];
			 }	
		}
	}
	printf("\n");
	printf("The resultant matrix is:\n ");
	for(i=0; i<m; i++){  
		for(j=0; j<q;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}		
	}
	return 0;
}
