#include<stdio.h>
int main()
{
int num1=1,num2=4,num3;

num3=num1;
num1=num2;
num2=num3;

printf("The value of num1:%d",num1);
printf("\n");
printf("The value of num2:%d",num2);

return 0;
}

