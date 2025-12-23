#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int str1[50],str2[50];
	printf("Enter the string:");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	printf("Is Palindrome");
	else
	printf("Is not Palindrome");
	return 0;
}
//int main()
//{
//	char str[50];
//	int i,len,flag;
//	printf("Enter the string to be checked:");
//	gets(str);
//	len = strlen(str);
//	for(i=0; i<len;i++){
//		if(str[i] != str[len-i-1]){
//			flag = 0;
//			break;
//		}
//	}
//	if(flag==1)
//	printf("String is Palindrome");
//	else("String is not a Palindrome");
//	return 0;
//}
