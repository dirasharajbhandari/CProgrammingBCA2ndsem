#include <stdio.h>
#include <limits.h> // For INT_MAX

int main()
{
    int age[5] = {3, 63, 4, 8, 31};
    int i, largest = INT_MIN, smallest = INT_MAX; // Initialize largest and smallest with extreme values
    
    for (i = 0; i < 5; i++)
    {
        if (age[i] > largest)
        {
            largest = age[i];
        }
        
        if (age[i] < smallest)
        {
            smallest = age[i];
        } 
    }
    printf("The greatest is: %d\n", largest);
    printf("The smallest is: %d", smallest);
    return 0;
}

