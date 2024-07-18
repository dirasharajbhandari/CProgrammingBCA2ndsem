//WAP to determine weather the given function is return type function with paramater

#include<stdio.h>
int primecomposite(int);

int main()
{
	int num,result;
	printf("Enter the number:");
	scanf("%d",&num);
	
    result=primecomposite(num);
	if(result==1)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number is composite");
	}
	return 0;
}
int primecomposite(int x)
{
	int i,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
		
	}	
	if(count==2)
		{
			return 1;
		}
		else
		{
			return 2;
			
		}
	
    }

//coverts that atm into function
//WAP to determine the number is odd or even using boolean written type function with parameter

