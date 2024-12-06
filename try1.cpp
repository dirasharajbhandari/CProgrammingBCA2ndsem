//addition without return and with parameter
#include<stdio.h>
int sum(int num1, int num2);
int main()
{
	int num1,num2,result;
	
	printf("Enter the value:",num1,num2);
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
	
	return 0;
}
int sum(int num1, int num2)
{
	int result;
	result=num1+num2;
	printf("The result is:%d",result);
	

}
