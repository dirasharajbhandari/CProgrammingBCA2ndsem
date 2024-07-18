#include<stdio.h>
int main()
{
	int age[5]={40,20,26,19,33};
	int i, count=0;
	
	printf("The age range from20-30:\n");
	
	for(i=0;i<5;i++)
	{
		if((age[i]>=20)&&(age[i]<=30))//&&both condition should be true
		{
			count++;//count=count+1
			printf("%d\t",age[i]);	
			
		}
		
	} 
     
     printf("\n%d",count);
  	return 0;
}
