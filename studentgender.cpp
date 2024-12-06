//wap to take input of 5 student as their roll no name and gender, display only the info of boys
#include<stdio.h>
struct student{
	int roll;
	char name[50];
	char gender;
	
};
int main()
{
	int i,j;
	struct student stud[3];
	for(i=0;i<3;i++)
	{
		printf("Info of student %d\n",i+1);
		printf("Enter the roll no:");
		scanf("%d",&stud[i].roll);
		
		printf("\nEnter the name:");
		scanf("%s",stud[i].name);
		
		printf("\nEnter the gender:");
		scanf(" %c",&stud[i].gender);
		
	}
	printf("Student list of boys:\n");
	for(i=0;i<3;i++)
	{
		if(stud[i].gender=='M'|| stud[i].gender=='m')
		{
			printf("Roll=%d\t",stud[i].roll);
			printf("Name=%s\t",stud[i].name);
			printf("Gender=%c\n",stud[i].gender);
			
			
		}
	}
	}
