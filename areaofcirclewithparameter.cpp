//WAP to calculate area of circle using a written type function with parameter

#include<stdio.h>
float area(float);

int main()
{
	float num;
	printf("Enter the radius:");
	scanf("%f",&num);
	
	printf("The area of circle=%f",area(num));
	
	return 0;
}

float area(float r)
{
	float result,pie;
	pie=3.14;
	result=pie*r*r;
	
	return result;
}
