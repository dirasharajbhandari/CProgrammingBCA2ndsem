//wap to take input of 20 employees as their employe id ,department , salary, display the info of employee whose department is java
#include<stdio.h>
#include<string.h>
struct employee{
	int salary;
	char department[50];
	char id[50];
	
};
int main()
{
	int i,j;
	struct employee emp[3];
	for(i=0;i<5;i++)
	{
		printf("Enter the %d id:",i+1);
		printf("Enter the id:\n");
		scanf("%s",&emp[i].id);
		
		printf("Enter the department:\n");
		scanf(" %s",&emp[i].department);
		
		printf("Enter the salary:\n");
		scanf("%d",&emp[i].salary);
		
	}
	
	for(i=0;i<5;i++)
	
	{
			if (strcmp(emp[i].department,"Java")==0)
        { 
	           printf("ID=%s",emp[i].id);
	           printf("Department:%s",emp[i].department);
	           printf("Salary:%d",emp[i].salary);
		}
		
	}
	  
}
