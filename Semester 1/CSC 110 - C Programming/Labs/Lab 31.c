//31. Write a C program that reads 5 names from user and print in ascending order using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

int main()
{
    char *name[N];
    char str[50], temp[50];
    int i, j;
    printf("Enter %d names\n", N);
    for (i = 0; i < N; i++)
    {
        gets(str);
        name[i] = (char *)malloc(sizeof(str));
        strcpy(name[i], str);
    }
    printf("Names before sorting\n");
    for (i = 0; i < N; i++)
    {
        printf("%s\n", name[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    printf("Names after sorting\n");
    for (i = 0; i < N; i++)
    {
        printf("%s\n", name[i]);
    }
}
