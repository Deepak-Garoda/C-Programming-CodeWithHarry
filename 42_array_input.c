#include <stdio.h>

int main(void)
{
    int marks[5];

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    };

    printf("\nPrinting the Input Marks by the user:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Entered the marks of student %d is: %d.\n", i, marks[i]);
    };

    printf("\n\n");

    return 0;
};