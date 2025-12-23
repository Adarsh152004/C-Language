#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n],a=1;
	for(i=0; i<=n-1; i++){
		printf("arr[%d] = %d \n",i,i);
		//scanf("%d ",&arr[i]);
		// a++;
	}
	int sum1 = 0;
	for(i=0; i<=n-1; i++){
		sum1 += arr[i];
		}
		printf("sum =%d ",sum1);
	return 0;
}
