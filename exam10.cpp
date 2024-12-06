//wap sum of two num without parameter
#include<stdio.h>
int sum();
int num1,num2,result;

int main()
{
	printf("Enter the two value:");
	scanf("%d%d",&num1,&num2);
	
	result=sum();
	
	printf("The result is:%d",sum());
	
}
int sum()
{
	result=num1+num2;
	return result;
}

