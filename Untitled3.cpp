#include <stdio.h>
#include <string.h>

// #define MAX_EMPLOYEE 30

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
    char address[50];
};

int main() {
    struct Employee employees[3];
    int i;

    // Input employee details
    for (i = 0; i < 3; i++) {
        printf("Enter the details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        
        printf("Employee Name: ");
        scanf("%s", employees[i].name); // Input string with spaces
        
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);
        
        printf("Employee Address: ");
        scanf("%s", employees[i].address); // Input string with spaces
        
        printf("\n");
    }

    // Display employees living in Pokhara
    printf("Employees living in Pokhara:\n");
    for (i = 0; i < 3; i++) {
       if(employees[i].address=='Pokhara'|| employees[i].address=='pokhara')
       {  // Correct comparison
            printf("Employee ID: %d, Name: %s, Salary: %.2f, Address: %s\n", 
                   employees[i].id, employees[i].name, employees[i].salary, employees[i].address);
        }
    }

    return 0;
}

