#include<stdio.h>
int main()
{
	int num[3];
	int i;
	FILE*even;
	FILE*odd;
	
	//open a file to write
	even=fopen("even.txt","w");
	odd=fopen("odd.txt","w");
	
	//check if there is file
	if(even==NULL || odd==NULL)
	{
		printf("error opening file !");
	}
	
	//input the numbers
	
	printf("Enter 30 numbers:");
	for(i=0;i<3;i++)
	{
		printf("Number:%d",i+1);
		scanf("%d",&num[i]);
	
	if(num[i]%2==0)
	{
		fprintf(even,"%d\n",num[i]);
	}
	else{
		fprintf(odd,"%d\n",num[i]);
	}
	}
	
	
	printf("The no has been sperated !");
	fclose(even);
	fclose(odd);
	
	return 0;
}
