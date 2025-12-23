#include<stdio.h>
#include<string.h>
int main(){
	typedef struct cricketer{  
		int age;
		int noOfmatches;
		char name[15];
		float average;
	} cricketer;
	
	int i;
	cricketer arr[1]; //arr[0], arr[1],.... arr[2]
	for(i=0;i<=1;i++){
		printf("Enter the name of cricketer:");
		scanf("%s",arr[i].name);
        scanf(" %d",&arr[i].age);
        scanf(" %f",&arr[i].average);
        scanf("%d",&arr[i].noOfmatches);
    }
    
    for(i=0;i<=1;i++){
    	printf("%s\n",arr[i].name);
        printf("Age = %d\n",arr[i].age);
        printf("No of Matches = %d\n",arr[i].noOfmatches);
        printf("Average = %f\n",arr[i].average);
        printf("\n");
        }
        return 0;
    }
