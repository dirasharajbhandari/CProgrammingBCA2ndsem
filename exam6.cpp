#include<stdio.h>
int mux(int,int);
int main()
{
	int num1,num2;
	
	printf("Enter the number:");
	scanf("%d%d",&num1,&num2);
	
	printf("The result is:%d\n",mux(num1,num2));
	
	return 0;
}

int mux(int x,int y)
{
	int result;
	result=x*y;
	
	return result;
}

