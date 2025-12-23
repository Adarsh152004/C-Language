#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter no of integers you want :");
	scanf("%d",&n);
	
	int* ptr = (int*) malloc(n*sizeof(int));
	int i;
	int* p = ptr;  // for storing from start 
	for(i=0;i<n;i++){
		scanf("%d",&(*ptr));
		ptr++;
	}
	for(i=0;i<n;i++){
		printf("%d ",(*p));
		p++;
	}
	return 0;
}
