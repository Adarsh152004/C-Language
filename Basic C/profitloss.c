#include<stdio.h>
#include<conio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("enter the selling prize:");
	scanf("%d",&sp);
	printf("enter the cost prize:");
	scanf("\n%d",&cp);
	if(sp>cp){
	printf("profit");
	}
	if (cp>sp){
	printf("loss");
}
	if(sp==cp)
	{
		printf("no profit,no loss");
	}
	else if(sp>cp)
	{
	profit = sp - cp;
	printf("\nprofit is %d",profit);
}
else if(cp>sp){
	loss = cp - sp;
	printf("\nloss is %d",loss);
}
	return 0;
}
	
