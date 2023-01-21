//34. Write a progarm that stores 20 numbers to file called "number.txt" and then read these numbers from the file and displays only prime numbers to monitor

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define N 20

int isprime(int n)
{
    int i, t = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            t++;
    }
    if (t == 2)
        return 1;
    else
        return 0;
}

int main()
{
    FILE *fp;
    int i, n;
    fp = fopen("C:\\janak\\number.txt", "w");
    if (fp == NULL)
    {
        printf("File cannot be created\n");
        exit(0);
    }
    else
    {
        printf("File created\n");
        printf("Enter %d numbers\n", N);
        for (i = 1; i <= N; i++)
        {
            scanf("%d", &n);
            fprintf(fp, "%d ", n);
        }
        fclose(fp);
    }
    fp = fopen("C:\\janak\\number.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot be opened\n");
        exit(0);
    }
    else
    {
        printf("File opened\n");
        for (i = 1; i <= N; i++)
        {
            fscanf(fp, "%d", &n);
            if (isprime(n))
                printf("%d ", n);
        }

        fclose(fp);
    }
}
//fputc()
//fgetc()

//fputs()
//fgets()

//fscanf();
//fprintf();

//fwrite();
//fread()