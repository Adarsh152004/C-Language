#include<stdio.h>
#include<conio.h>
int main(){
	int arr[100],n,target,k;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	//Sum of 2 array element equal to target
	printf("\n");
	printf("Enter the target number u want:");
	scanf("%d ",&target);
	printf("\n");
	printf("Enter the elements:");
	for(k=0;k<n;k++){
		scanf("%d",&arr[k]);
	}
	int i=0 , j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==target){
			printf("target  is found at %d and %d",arr[i],arr[j]);
			break;
		}
		else if(arr[i]+arr[j]>target){
			j--;
		}
		else i++;
	}
	return 0;
}
