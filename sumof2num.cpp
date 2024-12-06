#include<stdio.h>

void mux()
{
		int num1,num2,result;
	printf("Enter the value:");
	scanf("%d %d",&num1,&num2);
	
	result=num1*num2;
	printf("The value is:%d",result);
}


int main()
{
	mux();
	printf("\n");
	mux();
}
