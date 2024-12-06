//wihtout return type without parameter use global variable
#include<stdio.h>
int num1,num2,result;
void sum();
int main()
{
	
	printf("Enter the value:");
	scanf("%d%d",&num1,&num2);
	
	sum();
	
	return 0;
}
void sum()
{

    int result;
	result=num1+num2;
	printf("The result is:%d",result);
}
