#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the rows/columns: ");
	scanf("%d",&n);
	int i,j,arr[n][n];
	for(i=0; i<n; i++){   
		for(j=0; j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//Transpose
	for(i=0; i<n; i++){  
		for(j=0; j<i;j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	//Transpose printing
	printf("\n");
	for(i=0; i<n; i++){  
		for(j=0; j<n;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	//Rotate
	for(i=0; i<n; i++){
		int j=0, k= n - 1;
		while(j<k){
			//swap arr[i][j] to arr[i][k]			
			int temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
			j++;
			k--;
		}
	}
	//90 degree rotate printing
	printf("\n");
	for(i=0; i<n; i++){  
		for(j=0; j<n;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
