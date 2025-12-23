#include<stdio.h>
#include<conio.h>
int powerlog(int a, int b)
{
	if(b==0)  return 1;
      if(b==1)  return a;
      int x = powerlog(a,b/2);
      if(b%2==0){        //even power
      	return x * x;
	  }
	  else{             //odd power
	  	return x*x*a;
	  }
}

int main()
{
int a,b;
printf("Enter base: ");
scanf("%d",&a);
printf("Enter power: ");
scanf("%d",&b);
int p = powerlog(a,b);
printf("%d raised to the power %d is %d",a,b,p);	
	return 0;
}
