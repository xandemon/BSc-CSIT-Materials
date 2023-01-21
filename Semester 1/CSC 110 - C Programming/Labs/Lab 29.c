//29. Write a C program that return pointer

#include <conio.h>
#include <stdio.h>

struct person
{
    int age;
    char name[20];
    char address[20];
};
void read(struct person *p)
{
    printf("Enter age, name and address of a person\n");
    scanf("%d%s%s", &p->age, p->name, p->address);
}
void display(struct person *p)
{
    printf("Name %s\n", p->name);
    printf("Address : %s\n", p->address);
    printf("Age : %d\n", p->age);
}
struct person *older(struct person p1, struct person p2)
{
    if (p1.age > p2.age)
        return &p1;
    else
        return &p2;
}
int main()
{
    struct person p1, p2;
    struct person *p;
    read(&p1);
    read(&p2);
    p = older(p1, p2);
    printf("Older Person\n");
    display(p);
    getch();
    return 0;
}
