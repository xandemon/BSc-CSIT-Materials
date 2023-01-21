/*33. Write a C program that creates file "myfile.txt" and writes " Welcome to ASCOL College" to this file.
Also read the contents of the file and print on monitor*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("C:\\janak\\myfile.txt", "w");
    if (fp == NULL)
    {
        printf("File not created\n");
        exit(0);
    }
    else
    {
        printf("File created\n");
        printf("Enter line of text\n");
        gets(str);
        fputs(str, fp);
        printf("Successfully written to file\n");
        fclose(fp);
        getch();
    }
    printf("Opening file for reading....\n");
    getch();
    fp = fopen("C:\\janak\\myfile.txt", "r");
    if (fp == NULL)
    {
        printf("File not opened\n");
        exit(0);
    }
    else
    {
        printf("File opened\n");
        fgets(str, 100, fp);
        printf("Content of file: %s", str);
        fclose(fp);
    }
}