#include<stdio.h>
#include<conio.h>
int main()
{
     //char brr[] = {'H','e','l','l','o'};
     char arr[] = "My name is Adarsh Pathak\0";
     int i = 0;  // \0 is a Null character
     while(i!='\0'){  //loop till \0 and \0 willprint on output it is single valued character
	 printf("%c ",arr[i]);
	 i++;
	 }
	 return 0;
}
     
