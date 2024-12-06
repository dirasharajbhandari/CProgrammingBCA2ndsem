//with return with parameter
#include<stdio.h>
int num1,num2;
int sum(int num1,int num2);
int main()
{
	printf("Enter the value:");
	scanf("%d%d",&num1,&num2);
	
	sum(num1,num2);
	return 0;
}
int sum(int nun1,int num2)
{
	int result;
	result=num1+num2;
	printf("The result is:%d",result);
}
