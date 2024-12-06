#include <stdio.h>

int main() {
    int age[27], i, largest, smallest;

    // Input ages for 27 employees
    for (i = 0; i < 27; i++) {
        printf("Enter the age of employee %d: ", i + 1);
        scanf("%d", &age[i]);
    }

    // Initialize largest and smallest with the first element of the array
    largest = age[0];
    smallest = age[0];

    // Loop through the array to find the largest and smallest ages
    for (i = 1; i < 27; i++) {
        if (age[i] > largest) {
            largest = age[i];
        }
        if (age[i] < smallest) {
            smallest = age[i];
        }
    }

    // Output the largest and smallest ages
    printf("The oldest employee's age is: %d\n", largest);
    printf("The youngest employee's age is: %d\n", smallest);

    return 0;
}

