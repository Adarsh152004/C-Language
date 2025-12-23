#include<stdio.h>
#include<conio.h>
void main()
{
//	int a,b,choice,result;
//	printf("Enter the first number:");
//	scanf("%d",&a);
//	printf("Enter the second number:");
//	scanf("%d",&b);
//	printf("1.Add \n 2.Subtract \n 3.Multiple \n 4.Divide \n 5.Modulus\nEnter the choice: ");
//	scanf("%d",&choice);
//	switch(choice){
//	case 1: result = a + b;
//	printf(" Addition = %d",result);
//	break;
//	case 2: result = a - b;
//	printf(" Subtraction = %d",result);
//	break;
//	case 3: result = a * b;
//	printf(" Multiplication = %d",result);
//	break;
//	case 4: result = a / b;
//	printf(" Division = %d",result);
//	break;
//	case 5: result = a % b;
//	printf(" Modulus = %d",result);
//	break;
//	case 6: printf("Invalid choice");
//}
//return 0;
//}
    int n;  // months of a year
    printf("Enter the month number :");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("January");
		break;
		case 2: printf("February");
		break;
		case 3: printf("March");
		break;
		case 4: printf("April");
		break;
		case 5: printf("May");
		break;
		case 6: printf("June");
		break;
		case 7: printf("July");
		break;
		case 8: printf("August");
		break;
		case 9: printf("September");
		break;
		case 10: printf("October");
		break;
		case 11: printf("November");
		break;
		case 12: printf("December");
		break;
		case 13: printf("Invalid number");
	}
	getch();

}
	
	
	

