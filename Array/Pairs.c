#include<stdio.h>
#include<conio.h>
int main()
{
	int j,i,arr[8] = {1,2,3,4,5,6,7,8};
	int totalPairs = 0;
	int x = 12;
	for(i=0; i<=7; i++){
		for(j=i+1; j<=7; j++){
			if(arr[i]+arr[j] == x){
				totalPairs++;
				printf("(%d,%d)\n",arr[i],arr[j]);
			}
		}
	}
	printf("TotalPairs = %d ",totalPairs);
	return 0;
}
