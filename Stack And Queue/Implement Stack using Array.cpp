#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;

int push(){
	int x;
	printf("Enter data to be pushed:");
	scanf("%d", &x);
	if(top == N-1){
		printf("Overflow condition");
	}
	else{
		top++;
		stack[top] = x;
	}
}
int pop(){
	int item;
	if(top == -1){
		printf("Underflow condition");
	}
     else{
     	item = stack[top];
     	top--;
     	printf("%d\n",item);
	}
}
int peek(){
	if(top == -1){
		printf("Stack is empty");
	}
	else{
		printf("%d\n", stack[top]);
	}
}
int display(){
	int i;
	for(i=top; i>=0;i--){
		printf("%d ",stack[i]);
	}
}
int main(){
	int ch;
	do{
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\nEnter choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: push();
			break;
			case 2: pop();
				break;
            case 3: peek();
                break;
            case 4: display();
                break;
            default: printf("Invalid input");
		}
	}
	while(ch != 0);
	getch();
}
