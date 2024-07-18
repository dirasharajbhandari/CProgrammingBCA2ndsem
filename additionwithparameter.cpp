//written type with parameter (addition)
#include<stdio.h>
 //global variable
int addition(int,int);//function declaration
 int main()
 {
 	int first_num,second_num;
 	//local variable
 	printf("Enter two number:");
 	scanf("%d%d",&first_num,&second_num);
 	
 	printf("Sum of two numbers=%d",addition(first_num,second_num));
 	
 	return 0;
 }
 //global variable
 
 int addition(int x, int y)
 {
 	int sum;
	sum=x+y;
	
	return sum;
	
 }
 



	

