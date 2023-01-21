/*35. Create a structure called employee with data members: eid, name, salary, age.
Write a C program that writes N employee records to file.
Aslo read this content from file and display on monitor write to file*/

#include <stdio.h>
#include <conio.h>
#define N 5

struct employee
{
    int eid;
    char name[20];
    int salary;
    int age;
};

int main()
{
    FILE *fp;
    int i;
    struct employee e;
    fp = fopen("C:\\janak\\employee.rec", "wb");
    if (fp == NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File created\n");
        printf("Entre eid, name, salary and age of %d employees\n", N);
        for (i = 1; i <= N; i++)
        {
            scanf("%d%s%d%d", &e.eid, e.name, &e.salary, &e.age);
            fwrite(&e, sizeof(e), 1, fp);
        }
        printf("Successfully written to file\n");
    }
    fclose(fp);
    getch();
    return 0;
}
