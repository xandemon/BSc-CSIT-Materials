//30. Create structure Distance with data members: meter and centimeter. Write a C program that reads two distances from user and add them using pointer.

#include <conio.h>
#include <stdio.h>

struct distance
{
    int meter;
    int centimeter;
};

struct distance temp;
void read(struct distance *d)
{
    printf("Enter meter and centimeter\n");
    scanf("%d%d", &d->meter, &d->centimeter);
}
void display(struct distance *d)
{
    printf("%d m %d cm", d->meter, d->centimeter);
}
struct distance *sum(struct distance d1, struct distance d2)
{
    temp.centimeter = d1.centimeter + d2.centimeter;
    temp.meter = d1.meter + d2.meter;
    if (temp.centimeter >= 100)
    {
        temp.meter = temp.meter + temp.centimeter / 100;
        temp.centimeter = temp.centimeter % 100;
    }
    return &temp;
}
int main()
{
    struct distance d1, d2;
    struct distance *d;
    read(&d1);
    read(&d2);
    d = sum(d1, d2);
    printf("%d %d", d->meter, d->centimeter);
    getch();
    printf("\nDistance d1\n");
    display(&d1);
    printf("\nDistance d2\n");
    display(&d2);
    printf("\nThe sum distance\n");
    display(d);
    getch();
    return 0;
}
