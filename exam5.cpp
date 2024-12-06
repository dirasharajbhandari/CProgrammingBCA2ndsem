#include<stdio.h>
int main()
{
	int num;
	char option;
	char choice;
	
	do{
	
	printf("1. Odd and Even\n");
	printf("2. Positive and Negative\n");
	
	printf("Enter the option:\n");
	scanf(" %d",&option);
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	
	switch(option)
	{
		case 1:
			if(num%2==0)
			{
				printf("The number is even\n");
			}
			else
			{
				printf("The number is composite\n");
				
			}
			break;
			
		case 2:
			if(num>0)
			{
				printf("The number is positive\n");
			}
			else
			{
				printf("The number is negative\n");
				
			}
			break;
			
			default:
				printf("INVALID");
	}
	printf("Do you want to continue?\n if yes press y:\n");
	scanf(" %c",&choice);
	
	
}while(choice=='y'||choice=='Y');

      printf("THNAK YOU");
}
