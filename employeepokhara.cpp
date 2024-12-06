#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[50];
	float salary;
	char address[50];
};
int main(){
	
	struct Employee employees[2];
	int i;
	
	printf("Detail of employees:\n");
	for(i=0;i<2;i++)
	{
		printf("employee %d detail:\n",i+1);
		
		printf("enter employee id:");
		scanf("%d",&employees[i].id);
		
		printf("enter employee name:");
		scanf("%s",&employees[i].name);
		
		printf("enter employee salary:");
		scanf("%f",&employees[i].salary);
		
		printf("enter employee address:");
		scanf("%s",&employees[i].address);
			printf("\n");
	}
	printf("Detail of empolyee in pokhara:\n");
	for(i=0;i<3;i++)
	{
		if(strcmp(employees[i].address,"pokhara")==0 || strcmp(employees[i].address,"Pokhara")==0)
		{
			printf("enter employee id:%d",employees[i].id);
			printf("\n");
				printf("enter employee name:%s",employees[i].name);
					printf("\n");
					printf("enter employee salary:%f",employees[i].salary);
						printf("\n");
						printf("enter employee address:%s",employees[i].address						);
							printf("\n");
		}
						
	}
	return 0;
	
}
