#include<stdio.h>
#include<conio.h>
int reverse(int arr[],int a,int b){
	int i,j;
	for(i=a,j=b; i<j;i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return;
}
int main()
{
	int n,i,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<=n-1; i++){
		printf("Enter the element %d:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the no of element to be rotate: ");
	scanf("%d",&k);
//	k=k%n;
	reverse(arr,0,n);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(i=0; i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
