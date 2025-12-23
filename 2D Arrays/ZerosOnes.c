#include<stdio.h>
#include<conio.h>
int main()
{
	//max no. of 1's in a which row
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
	int maxCount = 0;
	int maxIdx = 0;
	for(i=0; i<r; i++){ 
	int count = 0;               
		for(j=0; j<c;j++){
		 if(arr[i][j]==1)  count++;	
		}
		if(maxCount<count){
			maxCount = count;
			maxIdx = i;
		}
		printf("\n");
	}
	printf("%d no of 1's are present in %d row",maxCount,maxIdx);
	return 0;
}
