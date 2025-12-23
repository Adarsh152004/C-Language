#include<stdio.h>
int main()
{
	float r,h,b,area1,area2,area3,area4;
	int pi = 3.14159265359;
	printf("enter the radius :",r);
	scanf("%f",&r);
	printf("enter the height:",h);
	scanf("%f",&h);
		printf("enter the base :",b);
	scanf("%f",&b);
	
	area1 = pi * r * r;
	area2 = (b*h)/2;
	area3 = h*h;
	area4 = b*h;
	printf("\nArea of circle: %f",area1);
	printf("\n\nArea of triangle: %f",area2);
	printf("\n\nArea of square: %f",area3);
	printf("\n\nArea of rectangle: %f",area4);
	
	float peri1,peri2,side;
	printf("\nenter the side:",side);
	scanf("\n%f",&side);
	
	peri1 = 4*side;
	peri2 = 2*(b + h);
	printf("\n\nperimeter of square: %f",peri1);
	printf("perimeter of rectangle: %f",peri2);
	
	return 0;
	
	
	
	
	
}
