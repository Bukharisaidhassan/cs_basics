#include <stdio.h>

void main()
{
    // Increment
    printf("First loop \n");
    for (int i = 0; i < 11; i++)
    {
        printf("Hello %i \n", i);
    }

    // Decrease
    printf("Another loop \n");
    for (int i = 10; i > 1; i--)
    {
        printf("Bye %i \n", i);
    }
}