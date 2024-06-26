#include<stdio.h>
int main()
{
    int firstNumber,secondNumber,sum,multiplication,subtraction;
    double division;
    printf("Enter the number:");
    scanf("%d %d",&firstNumber,&secondNumber);
    
    sum=firstNumber+secondNumber;
    subtraction=firstNumber-secondNumber;
    multiplication=firstNumber*secondNumber;
    //type casting
    division=(double)firstNumber/secondNumber;
     
     printf("The sum is:%d\n",sum);
     printf("The subtraction is:%d\n",subtraction);
     printf("The multiplication is:%d\n",multiplication);
     printf("The division is:%lf\n",division);
     
     return 0;
     
    }
