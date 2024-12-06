#include<stdio.h>
int main()
{
	int age[5]={50,60,80,44,30},i,j,largest=age[0],second_largest=age[0];
	
	for(i=1;i<5;i++)
	{
			if(age[i]>largest)
			{
			
			largest=age[i];
			}
			
			for(i=0;i<5;i--)
	
				if(age[i]>second_largest);
				{
				
				second_largest=age[i];
                }
		
	}

printf("The largest is:%d\n",largest);
printf("The second largest is:%d",second_largest);

return 0;
	
	}

