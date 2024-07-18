#include<stdio.h>

int main()
{
	int age[5]={3,63,4,8,31};
	int i,j, largest=age[0] ,second_largest=age[0], smallest=age[0], second_smallest=age[0];
	 
	 
	 for(i=1;i<5;i++)
	 {
	 	for(j=1;j<5;j++)
	 	{
		 
	 	if(age[i]>largest)
	 	{
	 		largest=age[i];
	 		
		 }
			if(age[i]<largest)
		{
			second_largest=age[i];
		} 
		 
		if(age[i]<smallest)
		{
			smallest=age[i];
			
		 }
		if(age[i]>smallest)
		{
			second_smallest=age[i];
		}
	     }
	
	}
	 printf("The largest is:%d\n",largest);
	 printf("The second largest is:%d\n",second_largest);
	 printf("The smallest is:%d\n",smallest);
	 printf("The second smallest is:%d\n",second_smallest);
	 
}
