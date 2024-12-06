//write program to operate "+,-,*,/"
#include<stdio.h>

int main()
{
	int num1,num2,result;
	char option;
	
	printf("Enter the operator(+,-,*,/):");
	scanf(" %c",&option);
	
	printf("Enter the two value:");
	scanf("%d%d",&num1,&num2);
	
	
	switch(option)
	{
	case '+': 
	result=num1+num2;
	printf("The result is:%d",result);
	break;
	
	case '-':
	result=num1-num2;
	printf("The result is:%d",result);
	break;
	
	case '*': 
	result=num1*num2;
	printf("The result is:%d",result);
	break;
	
	case '/': 
	result=num1/num2;
	printf("The result is:%d",result);
	break;
	
	default:

	printf("Option not available");
	
	
}
	return 0;
	
}
