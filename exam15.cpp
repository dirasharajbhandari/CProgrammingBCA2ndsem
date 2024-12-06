#include<stdio.h>
int main()
{
	int age[27],i,eldest,youngest,secondeeldest;
	
	for(i=0;i<27;i++)
	{
	
	printf("Enter the age %d:",i+1);
	scanf("%d",&age[i]);
	
}
eldest=age[0];
youngest=age[0];
secondeeldest=-1;

for(i=1;i<27;i++)
{
	if(age[i] > eldest)
	{
		secondeeldest=eldest;
		eldest=age[i];
	}
	else if(age[i]>secondeeldest&&age[i]!=eldest)
	{
		
		secondeeldest = age[i];
	}
	else if (age[i] < youngest)
	{
		youngest=age[i];
		
	}
}

printf("The largest is:%d",eldest);
printf("The second largest is:%d",secondeeldest);
printf("The smallest is:%d",youngest);
}
