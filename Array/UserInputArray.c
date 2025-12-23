#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<=n-1; i++){
		printf("Enter the element : %d",i,arr[i]);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<=n-1; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
