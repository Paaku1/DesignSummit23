// Implementing Bubble sort in a C Program
#include <stdio.h>

int main()
{

    int temp, i, j;

    int number[10] = {5, 2, 7, 9, 8, 1, 6, 4, 0, 3};
    printf("Original array: ");
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", number[i]);
    }

    // This is the main logic of bubble sort algorithm
    for (i = 10 - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (number[i] > number[i + 1])
            {
                temp = number[i];
                number[i] = number[i + 1];
                number[i + 1] = temp;
            }
        }
    }

    printf("\nSorted elements: ");
    for (i = 0; i < 10; i++)
        printf(" %d", number[i]);

    return 0;
}