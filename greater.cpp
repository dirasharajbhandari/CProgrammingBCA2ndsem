#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the num1 and num2:");
	printf("\n");
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("The num1 is greater");
	}
	else
	{
		printf("the num2 is greater");
	}
	
	return 0;
}
