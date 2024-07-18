//WAP to determine weather a number is odd or even return type function with out parameter

#include<stdio.h>
int oddeven();
int num1;
 int main()
 
 
 {
 	int result;
 	
 	printf("Enter the value:");
 	scanf("%d",&num1);
 	
 	result=oddeven();
 	if(result==10)
 	{
 		printf("the result is even");
 		
	 }
 	
 	else
 	{
 		printf("the result is odd");
	 }
 	return 0;
 }
   int oddeven()
   {
   	
   	if(num1%2==0)
   	{
   		//printf("The number is even");
   		return 10;
	   }
	   else
	   {
	   	
	   	return 20;
	   	
	   }
	   
   }
   
 
