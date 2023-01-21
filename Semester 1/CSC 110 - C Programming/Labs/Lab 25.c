//25. Write a program that finds sum of two one-dimensional arrays using pointers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum[10], i;
    for (i = 0; i < 10; i++)
    {
        *(sum + i) = *(a1 + i) + *(a2 + i);
    }
    printf("The sum array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(sum + i));
    }
    return 0;
}