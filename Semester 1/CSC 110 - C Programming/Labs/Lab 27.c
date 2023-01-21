//27. Write a C program to enter N numbers and find the mean/median

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, s = 0, mean, median, temp;
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
            s = s + *(p + i);
        }

        mean = s / n;
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
        if (n % 2 == 1)
        {
            i = (n + 1) / 2;
            median = *(p + i - 1);
        }
        else
        {
            i = n / 2;
            median = (float)(*(p + i - 1) + *(p + i)) / 2;
        }
        printf("Median = %d\n", median);
        printf("Mean = %d\n", mean);
    }
}