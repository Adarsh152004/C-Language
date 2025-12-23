#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<limits.h>
int main(){
	float x = sqrt(2);
	printf("%f\n",x);
	
	int y = __INT_MAX__;   //limits headerfile
	printf("%d\n",y);
	
	int z = INT_MIN;
	printf("%d\n",z);
	
	long a = LONG_MAX;
	printf("%ld\n",a);
	
	
	return 0;
}

