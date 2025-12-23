#include<stdio.h>
#include<conio.h>
int main(){
	int n,arr[100],i,j;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<=n-1;i++){
		scanf("%d ",&arr[i]);
	}
	printf("Before bubble sort: ");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
    for(i=0; i<=n-1; i++){
    	for(j=i; j<n-1; j++){
		if(arr[j] == 0){
			int temp = arr[j];
    		arr[j+1] = arr[j];
    		arr[j] = temp;
		}
	}
}
	
	printf("After bubble sort: ");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
return 0;	
}
