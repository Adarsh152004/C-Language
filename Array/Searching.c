#include<stdio.h>   
int main()
{
	int arr[7] = {1,4,2,8,19,5,12};
	int i,max = -1; //random smallest no taking 
	for(i=0; i<=7; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("Greatest no is: %d ",max);
	return 0;
}
