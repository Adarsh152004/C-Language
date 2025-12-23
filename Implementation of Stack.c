#include<stdio.h>
#include<conio.h>

int main(){
	int choice,items;
	printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
	scanf("%d", &choice);
	
	
	while(1){
		printf("Enter your choice: ");
		scanf("%d",&items);
		
		switch(choice){
		case 1:
			printf("Enter value to push: ");
			scanf("%d",&items);
			push(items);
			break;
		case 2:
		    pop();
		    break;
		case 3:
		       display();
			   break;	
		case 4:
		       return 0;
		default:
		      printf("Invalid choice!! \n");	     	   
	}
	}
	return 0;
}
