//oddeven without parameter with return type
//with return without parameter
#include<stdio.h>
int oddeven();
int num;

int main()
{
	int result;
	
	printf("Enter the value:");
	scanf("%d",&num);
	
	result=oddeven();//this is return type
	if(result==10)
	{
		printf("The value is even");
	}
	else
	{
		printf("The value is odd");
	}
	
}
int oddeven()
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
