#include<stdio.h>
#include<limits.h>
int main(){
	int n,arr[100],i,j;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<=n-1;i++){
		scanf("%d ",&arr[i]);
	}
	printf("Before sorting: ");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
// Selection Sorting
     for(i=0; i<n-1; i++){
     	int min = INT_MAX;
     	int minidx = -1;
     	for(j=i; j<=n-1;j++){
     		if(min>arr[j]){
     			min = arr[j];
     			minidx = j;
			 }
		 }
//swap the min and first element of unsorted part
//swap minidx and i		 
		 int temp = arr[minidx];
		 arr[minidx] = arr[i];
		 arr[i] = temp;
	 }


	printf("After sorting: ");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
return 0;	
}
