//find the area of the rectangle and find the largest area of rectangle
#include<stdio.h>
int main()
{
	int num1,num2,area1,area2,num3,num4;

	printf("Enter the 2 value:");
	scanf("%d%d",&num1,&num2);
	area1=num1*num2;
	printf("\n");
	
	printf("Enter the 2 value:");
	scanf("%d%d",&num3,&num4);
	area2=num3*num4;
	printf("\n");
	
	if(area1>area2)
	{
		printf("The value of area1 is greater:%d",area1);
	}
	else
	{
		printf("The value of area2 is greater:%d",area2);
	}
	
	return 0;
	
	
	
	
	
}
