#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[7] = {1,2,3,4,5,6,7};
	for(i=0; i<=6; i++){
		printf("The array  is %d : %d\n ",i,arr[i]);
	}	
	for(i=0; i<=6; i++){
		if(i%2!=0)  arr[i]*=2;
		else  arr[i]+=10;
	}
	printf("\n\n");
    for(i=0; i<=6; i++){
		printf("The incremented array  is %d : %d\n ",i,arr[i]);
	}	
	return 0;
}
