#include<stdio.h>
#include<conio.h>
int main(){
	//FILE* ptr = fopen("Adarsh.txt","w");    //for creating a file by user
	
	FILE* ptr = fopen("Adarsh.txt","r");  //for opening a file
	char str[100];
	while(fgets(str,100,ptr)!=NULL)
	printf("%s",str);
	
	return 0;
}
