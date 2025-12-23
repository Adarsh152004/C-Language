#include<stdio.h>
#include<string.h>
int main()
{
   char str[] = "My first coding practice";
     printf("%s\n",str);  //%s for printing string
     puts(str);  //new way for printing string
     printf("\n\n");
     
     //taking the inputs
     char st[40];
     //scanf("%s",st);  //only the first word will be considered 
     gets(st);
	 printf("Your input was : %s",st);    
	 return 0;
}
     
