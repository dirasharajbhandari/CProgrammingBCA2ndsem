#include<stdio.h>
void calc()
{
	int num1,num2,result,option;
	
	printf("Enter the number:");
	scanf("%d%d",&num1,&num2);
	
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
	
	scanf("%d",&option);
	
	switch(option)
	{	
		case 1:
		 result=num1+num2;
		 break;
		 
		case 2: 
				result=num1-num2;
		break;
		
		case 3:
		result=num1*num2;
		
		default:
				printf("Invalid number");
			}
				printf("The result is:%d",result);
}
int main()
{
	calc();
	printf("\n");
	calc();
}
