#include<stdio.h> 
float area(float);
int main()
{
	float num;
	printf("Enter the radius:");
	scanf("%f",&num);
	
	printf("The result is:%f\n",area(num));
	return 0;
}
float area(float r)
{
	float result;
	float pie=3.14;
	result=pie*r*r;
	return result;
}
