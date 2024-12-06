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
	
}
void qua(float a, float b, float c)
{
	float dicriminint,root1,root2,real,imaginary;
	
	dicriminint= b * b - 4 * a * c;
	
	if(dicriminint>0)
	{
		root1=-b+sqrt(dicriminint)/(2 * a);
		root2=-b-sqrt(dicriminint)/(2 * a);
		printf("The two distinct real root:%.2f and %.2f",root1,root2);
	}
	else if (dicriminint=0)
	{
		root1 = -b/(2 * a);
		printf("One real root:%.2f",root1);
	}
	else
	{
		real=-b/(2 * a);
		imaginary=sqrt(-dicriminint)/(2 * a);
		printf("The two distinct root are:%.2f + %.2f and %.2f + %.2f",real,imaginary,real,imaginary);
		
		
	}
}
