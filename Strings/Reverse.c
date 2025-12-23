#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	puts("Enter a string");
	gets(str);
    int size = 0, k = 0;
	while(str[k]!='\0')	{
		size++;
		k++;
	}
	printf("Size of string is %d\n",size);
	//Swapping
	int i,j;
	for( i=0,j=size-1; i<=j ; i++,j--){
		char temp =str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	puts("The reverse string is: ");  //automatically \n
	puts(str); 
	return 0;
}
