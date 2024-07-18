#include<stdio.h>
//write a program in c to store first 5 values in array and display it
//we must use loop to take input/output in the array
int main()
{
	int age[100],size,i;
	printf("Enter size in array:");
	scanf("%d",&size);
	
	for(i=0;i<=(size-1);i++)
	{
	  printf("Array at %d position:\t",i);
	  scanf("%d",&age[i]);
	  	
	}
	printf("Array element are: \t");
	for(i=0;i<=size-1;i++)
	{
		printf("%d\t",age[i]);
	}
	return 0;
	
	
	
}
