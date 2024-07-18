#include<stdio.h>
bool oddeven();
int num=4;
int main()
{
	if(oddeven())
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	
	return 0;
}
bool oddeven()
{
	if(num%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
