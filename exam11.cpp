//wap to add 2 num with parameter without return type
//Without return with parameter
#include<stdio.h>
int sum(int num, int num2);
int main()
{
	int num,num2,result;
	printf("Enter the two value:");
	scanf("%d%d",&num,&num2);
	
	
	printf("The result is:%d",sum(num,num2));
	
	return 0;
}
int sum(int num, int num2)
{
	int result;
	
	result=num+num2;
	//there is no return example: return result;
}
