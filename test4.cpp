//wap with return with parameter positive and negative
#include<stdio.h>
int posneg(int num);
int num,result;
int main()
{
	printf("Enter the value:");
	scanf("%d",&num);
	
	result=posneg(num);
	if(result==10)
	{
		printf("The number is positive\n");
	}
	else
	{
		printf("The number is negative\n");
	}
	printf("THANK YOU");
	
}
int posneg(int num)
{
	if(num>0)
	{
		return 10;
	}
	else
	{
		return 20;
	}
}
