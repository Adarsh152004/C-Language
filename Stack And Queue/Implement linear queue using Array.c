#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

int isfull(){
	return rear == N-1;
}
int isEmpty(){
	return front==-1 || front>rear;
}

int enqueue(int x){
	if(rear = N-1){
		printf("Queue is overflow");
	}
	else if(front == -1 && rear == -1){
		front = rear =0;
		queue[rear] = x;
	}
	else{
		rear++;
		queue[rear] = x;
	}
}
int dequeue(){
	if(front == -1){
		printf("Queue is underflow");
	}
	else if(front = rear){
		front = rear = -1;
	}
	else{
		printf("%d", queue[front]);
		front++;
	}
}
int display(){
	int i;
	if(front == -1 && rear == -1){
		printf("Queue is empty");
	}
	else{
		for(i=front; i<rear+1; i++){
			printf("%d ",queue[i]);
		}
	}
}
int main(){
	int ch, value;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.IsFull\n5.IsEmpty\nEnter choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("Enter value:");
			        scanf("%d",&value);
			        enqueue(value);
			        break;
			case 2: dequeue();
			        break;
			case 3: display();
			        break;
			case 4: isfull();
			        printf("Queue is full");
			        break;
			case 5: isEmpty();
			        printf("Queue is empty");
			        break;
			default: printf("Invalid input");
		}
	}
}
