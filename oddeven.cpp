#include<stdio.h>

int main()
{
	int number,result;
	char option;
	do
	{
		
	printf("enter the number:");
	
	scanf("%d",&number);
	result=number%2;
	if(result==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	printf("\n");
	
	printf("Do you want to continue?");
	
	printf("\n");
	
	printf("Press Y for continue and any other key for exit");
	printf("\n");
	
	scanf(" %c",&option);
	
}  while(option=='Y'||option=='y');
	 
	
	
	
	return 0; 
}
