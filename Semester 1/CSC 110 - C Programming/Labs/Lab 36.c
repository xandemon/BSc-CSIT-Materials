/*36. Create a structure called employee with data members : eid, name, salary, age,
Write a C program that writes N employee records to file.
1. Aslo read this content from file and display on monitor write to file
2 Search employee record according to name
3 Delete employee record according to eid
4 Update employee record according to eid
5 Display the records of employees whose salalry is greater than 35000*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define N 2

struct employee
{
    int eid;
    char name[20];
    int salary;
    int age;
};
void display(struct employee e);
int main()
{
    FILE *fp, *fptr;
    struct employee e, temp;
    char name[30];
    int found = 0, choice, id, flag = 0, count = 0;
    fp = fopen("C:\\janak\\employee.txt", "r+b");
    if (fp == NULL)
    {
        printf("File not opened\n");
        exit(0);
    }
    else
    {
        printf("File opened\n");
        printf("Contents of file\n");
        printf("Eid\tName\tSalary\tAge\n");
        while (fread(&e, sizeof(e), 1, fp))
        {
            display(e);
        }
        printf("Record of employees whose salary is less than 35000\n");
        rewind(fp);
        while (fread(&e, sizeof(e), 1, fp))
        {
            if (e.salary < 35000)
                display(e);
        }
        printf("Enter the name of the employee whose record is to be searched\n");
        gets(name);
        rewind(fp);
        while (fread(&e, sizeof(e), 1, fp))
        {
            if (strcmp(name, e.name) == 0)
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("Your record is found\n");
            printf("The details of the enployee is\n");
            display(e);
        }
        else
        {
            printf("Sorry your record not found. Try again\n");
        }
        printf("Do you want to update any record(0/1)\n ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Thank you\n");
            //exit(0);
        }
        else
        {
            printf("Enter eid of the employee whose record is to be updated\n");
            scanf("%d", &id);
            rewind(fp);
            while (fread(&e, sizeof(e), 1, fp))
            {
                if (id == e.eid)
                {
                    printf("Record found");
                    flag = 1;
                    printf("Old record is\n");
                    printf("%d\t%s\t%d\t%d\n", e.eid, e.name, e.salary, e.age);
                    printf("Enter record(eid, name, salary, age)\n");
                    scanf("%d%s%d%d", &temp.eid, temp.name, &temp.salary, &temp.age);
                    fseek(fp, sizeof(temp) * count, SEEK_SET);
                    fwrite(&temp, sizeof(temp), 1, fp);
                    printf("Updated successfully\n");
                    break;
                }
                count += 1;
            }
            if (flag == 0)
                printf("Record not found\n");
        }
        printf("Do you want delete some record(0/1)\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Thank you\n");
        }
        else
        {
            rewind(fp);
            int i = 1;
            printf("Enter eid of the employee whose record is to be updated\n");
            scanf("%d", &id);
            fptr = fopen("C:\\janak\\emp.txt", "wb");
            while (fread(&e, sizeof(e), 1, fp))
            {
                if (id != e.eid)
                {
                    fwrite(&e, sizeof(e), 1, fptr);
                    printf("record %d written to file\n", i);
                    i++;
                }
            }
            fclose(fp);
            fclose(fptr);
            remove("C:\\janak\\employee.txt");
            rename("C:\\janak\\emp.txt", "C:\\janak\\employee.txt");
            printf("Bye bye\n");
        }
        fclose(fp);
    }
}
void display(struct employee e)
{
    printf("%d\t%s\t%d\t%d\n", e.eid, e.name, e.salary, e.age);
}
