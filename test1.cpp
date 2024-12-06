//wap with return type without parameter of oddand even
#include<stdio.h>
int oddeven();
int num,result;
 
int main()
{
	printf("Enter the value:\n");
	scanf("%d",&num);
	
	result=oddeven();
	if(result==10)
	{
		printf("the number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}
	
	printf("THANK YOU");
}int oddeven()
{
	if(num%2==0)
	{
		return 10;
	}
	else
	{
		return 20;
	}
}
