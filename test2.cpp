//wap without return type with parameter sum
#include<stdio.h>
#include<math.h>
void sum(float num,float num2);
int main()
{
	float num,num2;
	printf("Enter the two number:\n");
	scanf("%f%f",&num,&num2);
	
	sum(num,num2);

	printf("THANK YOU");
}
void sum(float num,float num2)
{
	float result;
	result=num+num2;
	printf("The result is:%f\n",result);

}
