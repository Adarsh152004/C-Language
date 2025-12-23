#include<stdio.h>
#include<conio.h>
int main()
{
	//1 2 3    //1 8 3
   //4 5 6    //4 5 6
  //7 8 9    //7 2 9
	int m,n;
	printf("Enter the no of rows: ");
	scanf("%d",&m);
	printf("Enter the no of columns: ");
	scanf("%d",&n);
	int i,j,arr[m][n];
	for(i=0; i<m; i++){   //for taking elements
		for(j=0; j<n;j++){
			scanf("%d ",&arr[i][j]);
		}
	}
	printf("\n");
	if(j%2==0){
		for(i=m-1; i>0;i--){
         	printf("%d ",arr[i][j]);
		}
	}
		else{
			for(i=0; i<=m-1;i++){
				printf("%d ",arr[i][j]);
			}
		}
		   for(j=0; j<n;j++){
		    	printf("%d ",arr[i][j]);

		printf("\n");
	}
	return 0;
}
