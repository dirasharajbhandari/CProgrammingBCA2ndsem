#include<stdio.h>
int main()
{
	int option;
	int num1;
	char choice;
	do{
		
	
	printf("Enter the value:"); 
	 scanf("%d",&num1);
	 
	printf("*************************************************");
	printf("\n");
	
	printf("Determing odd even and postive negative numbers");
	printf("\n");
	
	printf("Options:");
	printf("\n");
	
	printf("1.Odd Even");
	printf("\n");
	
	printf("2.Postive Negative");
	printf("\n");
	
	printf("Enter your choice:");
	printf("\n");
	
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			if(num1%2==0)
			{
				printf("%d is even",num1);
			}
			else
			{
				printf("%d is odd",num1);
			}
			
			break;
			
		case 2:
				
				if(num1>0)
				{
					printf("%d is postive",num1);
				}
				else if(num1==0)
				{
					printf("%d is neither postive nor negative",num1);
				}
				else
				{
					printf("%d is negative",num1);
					
				}
				break;
				
				default:
				 
				printf("Option not available");		
					
	}
				
				printf("\n");
				printf("Do you want to continue:");
					printf("\n");
					
				printf("Y for continue and N for exit:");
					printf("\n");
	
	scanf(" %c",&choice);
	
}while(choice=='Y'||choice=='y');

	printf("Thank You");
	
	return 0;
}
