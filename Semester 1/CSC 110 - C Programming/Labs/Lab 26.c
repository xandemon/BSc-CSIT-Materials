//26. Write a C program that reads N numbers and prints top 5 numbers using Dynamic Memory Allocation, 27: last 5s

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    int *p;
    printf("How many numbers?\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory Allocation failed\n");
    }
    else
    {
        printf("Required memory allocated\n");
        printf("Enter %d numbers\n", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", p);
            p++;
        }
        p = p - n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (*(p + j) < *(p + j + 1))
                {
                    temp = *(p + j);
                    *(p + j) = *(p + j + 1);
                    *(p + j + 1) = temp;
                }
            }
        }

        printf("The top 5 numbers are\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d ", *(p + i));
        }
    }
    return 0;
}
