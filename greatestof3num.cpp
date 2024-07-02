#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the value of num1 num2 num3:");
	scanf("%d %d %d",&num1,&num2,&num3);
	 if(num1>num2)
	 {
	 	if(num1>num3)
	 	{
	 		printf("num1 is the greatest");
		 }
		 else
		 {
		 	printf("num2 is greatest");
		 }
	 
	 }
	 else
	 {
	 	if(num2>num3)
	 	{
	 		printf("num2 is the greatest");
		 }
		 else
		 {
		 	printf("num3 is the greatest");
		 }
	 }
	 return 0;
}
