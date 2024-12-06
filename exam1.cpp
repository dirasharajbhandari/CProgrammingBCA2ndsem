#include<stdio.h>
int main()
{
	int num1, num2;
	int result;
	char option;
	
	
	printf("Enter two value:");
	printf("\n");
	
	scanf("%d%d",&num1,&num2);
	printf("\n");
	
	printf("Enter the operator:\n");
	scanf(" %c",&option);
	
	switch(option)
	{
	   case '+':
	   	
	   	result=num1+num2;
	   	printf("The result is:%d\n",result);
	   	
	   	break;
	   	
	   	case '-':
	   		result=num1-num2;
	   		printf("The result is:%d\n",result);
	   		break;
	   		
	   		case '*':
	   			result=num1*num2;
	   			printf("The result is:%d\n",result);
	   			break;
	   			
	   			case '/':
	   				result=num1/num2;
	   				printf("The result is:%d\n",result);
	   				break;
	   				
	   				default:
	   					printf("Invalid");
	   					
}
printf("Thank You :)");	
return 0;
	
}
