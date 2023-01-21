//24. Write a C program that reads roll no.,name and marks in 5 subs of 10 students and then display the details of those students whose marks is greater than 300 with percentage

#include <stdio.h>
#define N 2

struct subject
{
    int phy;
    int math;
    int iit;
    int c;
    int dl;
};
struct student
{
    int rn;
    char name[20];
    struct subject marks;
    int total;
    float per;
};
void read(struct student s[]);
void display(struct student s[]);

int main()
{
    struct student s[N];
    read(s);
    display(s);
    return 0;
}

void read(struct student s[])
{
    int i;
    printf("Enter rollno,name and marks in (physics, maths, iit, C and DL) of %d students\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d%s", &s[i].rn, s[i].name);
        scanf("%d%d%d%d%d", &s[i].marks.phy, &s[i].marks.math, &s[i].marks.iit, &s[i].marks.c, &s[i].marks.dl);
        s[i].total = s[i].marks.phy + s[i].marks.math + s[i].marks.iit + s[i].marks.c + s[i].marks.dl;
        s[i].per = (s[i].total * 100) / 500;
    }
}
void display(struct student s[])
{
    int i;
    printf("RollNo\tName\tMarks\tPercentage\n");
    for (i = 0; i < N; i++)
    {
        if (s[i].total >= 300)
        {
            printf("%d\t%s\t%d\t%0.2f\n", s[i].rn, s[i].name, s[i].total, s[i].per);
        }
    }
}
