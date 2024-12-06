////wap with return type with parameter
//#include<stdio.h>
//int num1,num2,result;
//int sum(int num1,int num2)
//{
//	
////	printf("Enter the value:");
////	scanf("%d%d",&num1,&num2);
//	
//	result=num1+num2;
//	printf("This is the result:%d",result);
//	
//	
//	return 0;
//	
//}
//int main()
//{
//	sum(5,7);
//	printf("\n");
//	sum(7,6);
//	
//	
//}

//wap with return without parameter
//#include<stdio.h>
//int num1,num2,result;
//int sum()
//{
//	printf("Enter the value:");
//	scanf("%d%d",&num1,&num2);
//	result=num1+num2;
//	printf("The result is:%d",result);
//	
//}
//int main()
//{
//	sum();
//	printf("\n");
//	sum();
//}


//without return without parameter
//#include<stdio.h>
//int num,result;
//void oddeve();
//int main()
//{
//	
//	oddeve();
//
//}
//void oddeve()
//{
//	printf("Enter the number:");
//	scanf("%d",&num);
//	
//	if(num%2==0)
//	{
//		printf("The number is even");
//	}
//	else
//	{
//		printf("The number is odd");
//	}
//}
//

#include<stdio.h>
//int main()
//{
//	int age[27],i,eldest,second_eldest,youngest;
//	
//	for(i=0;i<27;i++)
//	{
//	
//	printf("Enter the age %d:",i+1);
//	scanf("%d",&age[i]);
//	
//    }
//    
//    eldest=age[0];
//    second_eldest=-1;
//    youngest=age[0];
//    
//    for(i=1;i<27;i++)
//    {
//    	if(age[i] > eldest)
//    	{
//    		second_eldest=eldest;
//    		eldest=age[i];
//		}
//		else if(age[i] > second_eldest && age[i]!=eldest)
//		{
//			second_eldest=age[i];
//		}
//		else if(age[i] < youngest)
//		{
//			youngest=age[i];
//		}
//	}
//	printf("The eldest is:%d\n",eldest);
//	printf("The second eldest is:%d\n",second_eldest);
//	printf("The youngest is:%d\n",youngest);
//
//	
//	
//}

//def is_prime(number):
//    if number <= 1:
//        return False
//    for i in range(2, int(number**0.5) + 1):
//        if number % i == 0:
//            return False
//    return True
//
//
//num = 29
//if is_prime(num):
//    print(f"{num} is a prime number.")
//else:
//    print(f"{num} is not a prime number.")


//int num,result,i,isprime=1;
//void prime();
//int main()
//{
//	printf("Enter the num:");
//	scanf("%d",&num);
//	
//	prime();
//	
//}
//
//void prime()
//{
//	
//	if(num<=1)
//	{
//		isprime=0;
//		
//		
//	}
//	else
//	{
//		for(i=2;i<=num/2;i++)
//		{
//			if(num % i == 0)
//			{
//			
//			isprime=0;
//			break;
//			
//		}
//		}
//	}
//	if(isprime)
//	{
//		printf("The number prime");
//	}
//	else
//	{
//		printf("The number is composite");
//	}
//
//}
int num,num2,add,result;
int sum(int num,int num2);
int main()
{
	printf("Enter the number:");
	scanf("%d%d",&num,&num2);
	
	printf("The addition is:%d",sum(num,num2));
	

}
int sum(int num,int num2)
{
	result= num+num2;
	 return result;
	
	
}



































