#include<stdio.h>
#include<conio.h>
int main(){
//	int arr[5] = {2,4,6,8,1};    //5 dabbe create to kr liye
//	arr[4] = 100;   //change the value at index 4 from 1 to 100
//	arr[1] = 1;
//	printf("%d",arr[4]);

//    int i,arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    for(i=0; i<=9; i++)
//    printf("%d ",arr[i]);

     int arr[5],i;
     for(i=0; i<=4; i++){
     	printf("Enter element number %d:\n",i+1);
     	scanf("%d ",&arr[i]);
	 }
	 for(i=0; i<5; i++){
	 	printf("%d ",arr[i]);
	 }
	return 0;
}
