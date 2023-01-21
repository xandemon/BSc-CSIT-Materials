//35. Write a C program to find the sum of two 3x3 matrices using pointers

#include <stdio.h>

int main()
{
    int i, j, m1[3][3], m2[3][3], sum[3][3];
    printf("Enter the elements of the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(m1 + i) + j));
        }
    }
    printf("Enter the elements of the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(m2 + i) + j));
        }
    }
    //sum
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(sum + i) + j) = *(*(m1 + i) + j) + *(*(m2 + i) + j);
        }
    }
    printf("The sum of matrices is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
    return 0;
}