//wap to take input of five student as their roll no and name also short them in ascending order and diaplay it using structure
#include<stdio.h>
struct student{
	int roll;
	char name[50];
	
};
int main()
{
	struct student stud[5],temp;
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("enter the roll number for student %d\n",i+1);
		scanf("%d",&stud[i].roll);
		
		printf("Enter the name\n");
		scanf("%s",stud[i].name);
		
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(stud[i].roll>stud[j].roll)
			{
				temp=stud[i];
				stud[i]=stud[j];
				stud[j]=temp;
				
			}
		}
	}
	printf("Student list in ascending order by roll number\n");
	
	for(i=0;i<5;i++)
	{
		printf("roll=%d\t",stud[i].roll);
		printf("Name=%s\n",stud[i].name);
	}
	return 0;
}
