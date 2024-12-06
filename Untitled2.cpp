#include<stdio.h>
#include<string.h>
#define MAX_EMPLOYEE 30;

struct Employee{
    int id;
    char name[50];
    float salary;
    char address[50];

}
int main()
{
    struct Employee employees[MAX_EMPLOYEE];
    int i;

    for(i=0;i<=MAX_EMPLOYEE;i++)
    {
        printf("Enter the detail of employee %d",i+1);
        printf("Employee id:%d");
        scanf("%d",&employees[i].id);
        printf("\n");

        printf("Employee name:%d");
        scanf("%d",&employees[i].name);
        printf("\n");
        
        printf("Employee salary:%d");
        scanf("%d",&employees[i].salary);
        printf("\n");
        
        printf("Employee address:%d");
        scanf("%d",&employees[i].address);
        printf("\n");
        
    }
    
    for(i=0;i<MAX_NUMBER;i++)
    {
    	if(strcmp(employees[i].address"pokhara")!==0)
    	{
    	printf("Employee name:%d",employees[i].name);
		}
	}
	return 0;

}
