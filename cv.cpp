#include<stdio.h>

int main()
{
    int roll, age;
    char name[20], faculty[20], email[20];
    char section;

    printf("Enter the Name:");
    printf("\n");
    scanf("%s", name);
    
    printf("\n");
    
    printf("Enter the Roll no:");
    printf("\n");
    scanf("%d", &roll);

    printf("\n");

    printf("Enter the Faculty:");
    printf("\n");
    scanf("%s", faculty);
   
    printf("\n");

    printf("Enter the Age:");
    printf("\n");
    scanf("%d", &age);

    printf("\n");

    printf("Enter the Email:");
    printf("\n");
    scanf("%s", email);

    printf("\n");

    printf("Enter the Section:");
    printf("\n");
    scanf(" %c", &section);

    printf("\n");
    
    printf("Your name is %s. \nYour roll number is %d. \nYour faculty is %s. \nYour age is %d. \nYour email is %s. \nYour section is %c", name, roll, faculty, age, email, section);

    return 0;
}

