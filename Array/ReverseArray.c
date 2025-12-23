#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[7] = {1,2,3,4,5,6,7};
	int brr[7];
	for(i=0; i<=6; i++){
		printf("The array  is %d : %d\n ",i,arr[i]);
	}	
	for(i=0; i<=6; i++){
		brr[i] = arr[6-i];
	}
	printf("\n\n");
		for(i=0; i<=6; i++){
		printf("The array  is %d : %d\n ",i,brr[i]);
			}
	return 0;
}
