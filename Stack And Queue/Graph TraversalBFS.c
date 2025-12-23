#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 100
int queue[N],front = -1,rear = -1;
int visited[N];
int n;
int adj[N][N];

int enqueue(int v){
	if(rear == N-1){
		printf("Overflow");
	}
	else {
		if(front == -1){
			front =0;
			queue[++rear] = v;
		}
	}
}
int dequeue(){
	if(front == -1 || front>rear){
		printf("underflow");
		return -1;
	}
	else {
		return queue[front++];
	}
}
int BFS(int start){
	int i;
	printf("%d",start);
	visited[start] = 1;
    enqueue(start);
	while(front<rear){
		int v = dequeue();
		for(i=0; i<n;i++){
			if(adj[v][i] ==1 && !visited[i]){
				printf("%d",i);
				visited[i];
				enqueue(i);
			}
		}
	}	
}
int addEdge(int u, int v){
	adj[u][v] = 1;
	adj[v][u] = 1;
}
int main(){
	int edges,u,v,start,i,j;
	printf("Enter the no of vertices:");
	scanf("%d", &n);
	printf("Enter no. of edges:");
	scanf("%d", &edges);
	
	for(i=0;i<n;i++){
		visited[i]=0;
		for(j=0;j<n;i++){
			adj[i][j]=0;
		}
	}
	for(i=0;i<edges;i++){
		printf("Enter edges (u v): ");
		scanf("%d %d", &u,&v);
		addEdge(u,v);
	}
	printf("Enter the starting vertex:");
	scanf("%d",&start);
	
	printf("BFS Traversal:");
	BFS(start);
	getch();
}
