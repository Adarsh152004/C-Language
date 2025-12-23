#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int i,sum=0;
	for(i=0; i<=4; i++){
		sum += arr[i];
	}
	printf("The sum of a array is %d",sum);
	return 0;
}
