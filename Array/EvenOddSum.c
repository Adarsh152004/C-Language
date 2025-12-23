#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[7] = {1,2,3,4,5,6,7};
	int sumEven=0, sumOdd=0;
	for(i=0; i<=6; i++){
		printf("The array  is %d : %d\n ",i,arr[i]);
	}	
	for(i=0; i<=6; i++){
		if(i%2!=0)  sumOdd += arr[i];
		else  sumEven += arr[i];
	}
	printf("\n\n");
	int diff = sumEven - sumOdd;
    	printf("The sum of even elements of array is %d\n",sumEven);
		printf("The sum of odd elements of array is %d\n",sumOdd);	
	    printf("The difference is %d",diff);
	return 0;
}
