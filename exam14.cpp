//wap without return with parameter
#include<stdio.h>
#include<math.h>
void qua(float a, float b, float c);
int main()
{
	float a,b,c;
	
	printf("Enter the coffecient for a:");
	scanf("%f",&a);
	
	printf("Enter the coffecient for b:");
	scanf("%f",&b);
	
	printf("Enter the coffecient for c:");
	scanf("%f",&c);
	
	qua(a,b,c);
	return 0;
	
	return 0;
}
void qua(float a, float b, float c)
{
	float discriminint,root1,root2,real,imaginary;
	
	discriminint= b * b - 4 * a * c;
	
	if(discriminint>0)
	{
		root1=(-b + sqrt(discriminint))/(2 * a);
		root2=(-b - sqrt(discriminint))/(2 * a);
		
		printf("The two distinct real root:%.2f and %.2f",root1,root2);
	}
	else if(discriminint==0)
	{
		root1=-b/(2 * a);
		printf("The one real number is:%.2f",root1);
	}
	else
	{
		real=-b/( 2 * a);
		imaginary= sqrt(-discriminint)/(2 * a);
		
		printf("The distinct roots is: %.2f + %.2f and %.2f - %.2f",real,imaginary,real,imaginary);
		
	}
}
