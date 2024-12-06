//with return without parameter
#include<stdio.h>
int num1,num2;
int sum();
int main()
{
	printf("Enter the value:");
	scanf("%d%d",&num1,&num2);
	
	sum();
	
	return 0;
}
int sum()
{
	int result;
	result=num1+num2;
	printf("The result is:%d",result);
}
