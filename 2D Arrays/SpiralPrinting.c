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
	printf("Enter the element of matrix:\n");
	for(i=0; i<m; i++){   //for taking elements
		for(j=0; j<n;j++){
			scanf("%d ",&arr[i][j]);
		}
	}
	printf("\n");
//	Spiral printing
 int minr = 0;
 int maxr = m-1;
 int minc = 0;
 int maxc = n-1;
 int tne = n*m;    //total no. of elements
 int count = 0;
 while(count<tne){
 	//printing the  minimum row
 	for( j=minc; j<=maxc; j++){
 		printf("%d ",arr[minr][j]);
 		count++;
	 }
	 minr++;
	 if(count>=tne)  break;
	 //print the maximum column
	 for(i=minr; i<=maxr; i++){
	 	printf("%d ",arr[i][maxc]);
	 		count++;
	 }
	 maxc--;
	 if(count>=tne)  break;
	 //print the maximum row
	 for( j=maxc; j>=minc;j--){
	 	printf("%d ",arr[maxr][j]);
	 		count++;
	 }
	 maxr--;
	 if(count>=tne)  break;  //for not printing a last no twice
	 //print the minimum row
	 for(i=maxr; i>=minr; i--){
	 	printf("%d ",arr[i][minc]);
	 		count++;
	 }
	 minc++;
	 if(count>=tne)  break;
 }
 return 0;
}
	
	
	
	
	
	
	
	
	
