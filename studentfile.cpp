#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char name[50];
	int roll;
	char address[50];
};
int main()
{
	FILE *std;
	
	struct student stud[3];
	int i, j;
	
	std=fopen("D:\\filehand\\stdinfo","w");
	
	
	for(i=0;i<3;i++)
	{
		printf("The info of student %d\n",i+1);
		
		printf("Enter the roll number of the student:\n");
		scanf("%d",&stud[i].roll);
		
		printf("Enter the name of the student:");
		scanf("%s",stud[i].name);
		
		printf("Enter the address:");
		scanf("%s",stud[i].address);
		
		
	}
	
    for(i=0;i<3;i++)
    {
    	fprintf(std,"The data of student:%d",i+1);
    	fprintf(std,"Roll=%d\n",stud[i].roll);
    	fprintf(std,"Name=%s\n",stud[i].name);
    	fprintf(std,"Address:%s\n",stud[i].address);
    	
    	
    	printf("\n");
    	
    	
	}
	fclose(std);
}
