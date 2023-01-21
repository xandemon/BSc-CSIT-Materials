//1. Write a C program that takes a number and tests whether it is a multiple of 7 or not.

#include<stdio.h>

int main(){
    int num, r;
    printf("Enter the number:  ");
    scanf("%d", &num);
    r = num%7;
    if (r==0) printf("%d is a multiple of 7.\n", num);
    else printf("%d is not a multiple of 7.\n", num);
    return 0;
}

//2. Write a program that reads marks of five subjects of a student and checks whether the student is pass or fail. (PM=40)

#include<stdio.h>

int main(){
    int C, Phy, Maths, DL, IIT;
    printf("Enter marks in C, Phy, Maths, DL and IIT respectively:\n");
    scanf("%d%d%d%d%d", &C, &Phy, &Maths, &DL, &IIT);

    if (C>=40 && Phy>=40 && Maths>=40 && DL>=40 && IIT>=40){
        printf("The student is pass :)\n");
    }
    else{
        printf("The student is fail :(\n");
    }
    return 0;
}

//3. Write a program that reads a two digit integer and finds the sum of its digits.

#include<stdio.h>

int main(){
    int num, d1, d2, sum;
    printf("Enter any two digit number:  ");
    scanf("%d", &num);
    d1 = num%10;
    d2 = num/10;
    sum = d1+d2;
    printf("The sum of digits is %d.\n", sum);
    return 0;
}

//4. Write a program that reads a number and finds the sum of its digits.

#include<stdio.h>

int main(){
    int n, d, s=0;
    printf("Enter any number:  ");
    scanf("%d", &n);

    while(n>0){
        d = n%10;
        s = s+d;
        n = n/10;
    }
    printf("The sum of digits is %d.\n", s);
    return 0;
}

//5. Write a program that reads a number and tests whether it is prime or composite.

#include<stdio.h>

int main(){
    int n, c=0, i=1;
    printf("Enter any number:  ");
    scanf("%d", &n);
    while (i<=n){
        if (n%i==0) c=c+1;
        i++;
    }
    if (c==2){
        printf("The number is prime.\n");
    }
    else if (c<=1){
        printf("The number is neither prime nor composite.\n");
    }
    else{
        printf("The number is composite.\n");
    }
    return 0;
}

//6. Write a program that reads a number and finds its reverse.

#include<stdio.h>

int main(){
    int n, d, r=0;
    printf("Enter any number.\n");
    scanf("%d", &n);
    while(n>0){
        d = n%10;
        r = r*10 + d;
        n = n/10;
    }
    printf("The reverse number is %d.\n", r);
    return 0;
}

//7. Write a program that reads a number and check whether it is palindrome or not.

#include<stdio.h>

int main(){
    int n, d, a, r=0;
    printf("Enter any nmber:  ");
    scanf("%d", &n);
    a = n;
    while(n>0){
        d = n%10;
        r = r*10 + d;
        n = n/10;
    }
    if(a==r){
        printf("The number %d is palindrome.\n", a);
    }
    else{
        printf("The number %d is not palindrome.\n", a);
    }
    return 0;
}

//8. Write a C program that reads a number and finds the sum of of cubes of digits.

#include<stdio.h>

int main(){
    int n, d, sum=0;
    printf("Enter the number:  ");
    scanf("%d", &n);
    while(n>0){
        d = n%10;
        sum = sum + (d*d*d);
        n = n/10;
    }
    printf("The sum of cubes of digits of is %d.\n", sum);
    return 0;
}

//9. Write a program that reads a number and checks whether the number is Armstrong or not.

#include<stdio.h>

int main(){
    int n, d, a, s=0;
    printf("Enter any number:  ");
    scanf("%d", &n);
    a = n;
    while (n>0){
        d = n%10;
        s = s + (d*d*d);
        n = n/10;
    }
    if (a==s){
        printf("The number %d is a Armstrong number.\n", a);
    }
    else{
        printf("The number %d is not a Armstrong number.\n", a);
    }
    return 0;
}

//10. Write a program that reads coeffiecients of quadratic equation and find its roots

#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d, root1, root2;
    printf("Enter the coefficients a, b, c:\n");
    scanf("%f%f%f", &a, &b, &c);
    d = (b*b) - 4*a*c;
    if (d>0){
        d = sqrt(d);
        root1 = (-b+d)/(2*a);
        root2 = (-b-d)/(2*a);
        printf("Value of first root = %0.3f\n", root1);
        printf("Value of second root = %0.3f\n", root2);
    }
    else{
        printf("The equation has no real roots.\n");
    }
    return 0;
}

//11. Write a program that prints prime numbers from 200 to 300.

#include<stdio.h>

int main(){
    int i, j, t, p;
    printf("Prime numbers from 200 to 300 are:\n");
    for (i=200; i<=300; i++){
        t = 0;
        for (j=1; j<=i; j++){
            if (i%j==0){
                t++;
            }
        }
        if (t==2) printf("%d  ", i);
    }
    return 0;
}

//12. Write a C program that reads 10 numbers and sorts them in ascending order

#include <stdio.h>
#define N 10

int main(){
    int i, j, temp, n[N];
    printf("Enter the %d numbers:\n", N);
    for (i=0; i<N; i++){
        scanf("%d", &n[i]);
    }
    printf("\nOrder of numbers before sorting:\n");
    for (i=0; i<N; i++){
        printf("%d  ", n[i]);
    }
    //sorting begins
    for(i=0; i<N; i++){
        for (j=0; j<(N-1); j++){
            if (n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    printf("\nOrder of numbers after sorting:\n");
    for (i=0; i<N; i++){
        printf("%d  ", n[i]);
    }
    return 0;
}

//13. Write a C program that searches key alement in an array

#include <stdio.h>
#define N 10

int main(){
    int x[N] = {10, 20, 110, 30, 70, 22, 38, 67, 54, 121};
    int i, t = 0, key = 110;

    for (i=0; i<N; i++){
        if (key == x[i]){
            t=1;
            break;
        }
    }
    if (t == 1){
        printf("\nKey item found in the array.\n");
    }
    else{
        printf("\nKey item not found in the array.\n");
    }
    return 0;
}

//14. Write a C program that checks if the array contains duplicate elements

#include <stdio.h>
#define N 10

int main(){
    int x[N] = {20, 110, 30, 110, 70, 22, 38, 67, 54, 121};
    int a, i, j, t=0;

    for (i=0; i<N; i++){
        for (j = i+1; j<N; j++){
            if (x[i] == x[j]){
                a = x[i];
                t=1;
                break;
            }
        }
    }
    if (t == 1){
        printf("Array contains duplicate element: %d", a);
    }
    else{
        printf("Array doesn't contain any duplicate element.");
    }
    return 0;
}

//15. Write a C program that reads 4 numbers and find the sum of squares

#include <stdio.h>
#define N 4

int main(){
    int x[N], sum=0;
    printf("\nEnter the %d numbers:\n", N);
    for (int i=0; i<N; i++){
        scanf("%d", &x[i]);
    }
    printf("The %d numbers are:\n", N);
    for (int i=0; i<N; i++){
        printf("%d ", x[i]);
    }
    //calculating sum
    for (int i=0; i<N; i++){
        sum = sum + (x[i]*x[i]);
    }
    printf("\nThe sum of squares of %d numbers is %d.", N, sum);
    return 0;
}

//16. Write a C program that reads 10 numbers and find frequency of each element.

#include <stdio.h>
#define N 10

int main(){
    int x[N], fr[N];
    int i, j, count;
    printf("Enter the %d numbers:\n", N);
    for (i=0; i<N; i++){
        scanf("%d", &x[i]);
    }
    //storing dummy value
    for (i=0; i<N; i++){
        fr[i] = -1;
    }
    for (i=0; i<N; i++){
        count = 1;
        for (j=i+1; j<N; j++){
            if (x[i] == x[j]){
                count = count +1;
                x[j] = 0; //to avoid counting same element
            }
        }
        if (x[i] != 0){
            fr[i] = count;
        }
    }
    for (i=0; i<N; i++){
        if (x[i] != 0){
            printf("Frequency of %d = %d\n", x[i], fr[i]);
        }
    }
    return 0;
}

//17. Write a C program to find the sum, difference and product of two 3*3 matrices.

#include <stdio.h>

int main(){
    int i, j, k, s=0;
    int m1[3][3], m2[3][3], sum[3][3], diff[3][3], product[3][3];

    //first matrix input
    printf("\nEnter the elements of first 3x3 matrix (row-wise)\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    //second matrix input
    printf("\nEnter the elements of second 3x3 matrix (row-wise)\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    //test print
    printf("\nFirst Matrix\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    //computing sum and diff
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
            diff[i][j] = m1[i][j] - m2[i][j];
        }
    }
    //computing product
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            s=0;
            for (k=0; k<3; k++){
                s = s + m1[i][k] * m2[k][j];
            }
            product[i][j] = s;
        }
    }

    //printing the result
    printf("The sum of matrices is\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("The difference of matrices is\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    printf("The product of matrices is\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//18. Write a C program that reads a word and checks whether it is palindrome or not

#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}

//19. Write a program to find first 30 fibonacci series using recursion

#include<stdio.h>  
int Fibonacci(int x); 

int main(){    
    int n, i, c;
    printf("Enter no. of Fibonacci terms you want.\n");
    scanf("%d",&n);     
    printf("\nFibonacci series\n");     
    for ( i=0; i<n ; i++){       
        printf("%d\n", Fibonacci(i));
    }     
    return 0; 
}  
int Fibonacci(int x){    
    if (x == 0 ){
        return 0;
    }
    else if (x == 1){   
        return 1;
    }
    else{
        return (Fibonacci(x-1) + Fibonacci(x-2));
    }
}  

/*21. Create a Structure Time (Hour, Minute, Second) and then create two time variable T1(1,20,40) and T2(2,30,50),
and add them by sorting sum */ 

#include <stdio.h>

struct time{
    int hour;
    int minute;
    int second;
};
struct time sum(struct time t1, struct time t2);
int main(){
        struct time t1 = {1,20,40};
        struct time t2 ={2,30,50};
        struct time t;
        t=sum(t1,t2);
        printf("Total time:%d:%d:%d",t.hour,t.minute,t.second);
        return 0;
    }
struct time sum(struct time t1, struct time t2){
        struct time temp;
        temp.second=t1.second+t2.second;
        temp.minute = t1.minute+t2.minute;
        temp.hour = t1.hour+t2.hour;
        while (temp.second>60)
        {
           temp.second = temp.second-60;
           temp.minute = temp.minute+1;
        }
         while (temp.minute>60)
        {
           temp.minute = temp.minute-60;
           temp.hour = temp.hour+1;
        }
        return temp;
    }

//22. Multuipy Complex numbers using struct

#include <stdio.h>

struct complex{
    int real;
    int img;
};

int main()
    {
        struct complex c1 ={2,3};
        struct complex c2={2,5};
        // Formula: (a1+b1i)*(a2+b2i) = (a1a2-b1*b2)+(a1b2+b1a2)i
        struct complex c3;
        c3.real =c1.real*c2.real-c1.img*c2.img;
        c3.img =c1.real*c2.img+c2.real*c1.img;
        printf("Total complex number = %d +%di",c3.real,c3.img);
        return 0;
    }

//22. Multuipy Complex numbers using struct

#include <stdio.h>

struct complex{
    int real;
    int img;
};

int main()
    {
        struct complex c1 ={2,3};
        struct complex c2={2,5};
        // Formula: (a1+b1i)*(a2+b2i) = (a1a2-b1*b2)+(a1b2+b1a2)i
        struct complex c3;
        c3.real =c1.real*c2.real-c1.img*c2.img;
        c3.img =c1.real*c2.img+c2.real*c1.img;
        printf("Total complex number = %d +%di",c3.real,c3.img);
        return 0;
    }

// LAB 23: Write a C program that reads roll no, name and marks of 3 students and then display the details of those students whose marks is greater than 80

#include <stdio.h>
#define N 3

struct student
{
    int rn;
    char name[20];
    int marks;
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
    printf("Enter roll no., name and marks of %d students\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d%s%d", &s[i].rn, &s[i].name, &s[i].marks);
    }
}

void display(struct student s[])
{
    int i;
    printf("RollNo\tName\tMarks\n");
    for (i = 0; i < N; i++)
    {
        if (s[i].marks > 80)
        {
            printf("%d\t%s\t%d\n", s[i].rn, s[i].name, s[i].marks);
        }
    }
}

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

//25. Write a program that finds sum of two one-dimensional arrays using pointers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum[10], i;
    for (i = 0; i < 10; i++)
    {
        *(sum + i) = *(a1 + i) + *(a2 + i);
    }
    printf("The sum array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(sum + i));
    }
    return 0;
}

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

//35. Write a C program to find the sum of two 3x3 matrices using pointers

#include <stdio.h>

int main()
{
    int i, j, m1[3][3], m2[3][3], sum[3][3];
    printf("Enter the elements of the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(m1 + i) + j));
        }
    }
    printf("Enter the elements of the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(m2 + i) + j));
        }
    }
    //sum
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(sum + i) + j) = *(*(m1 + i) + j) + *(*(m2 + i) + j);
        }
    }
    printf("The sum of matrices is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
    return 0;
}

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

//31. Write a C program that reads 10 names from user and print in ascending order using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

int main()
{
    char *name[10];
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

/*32. Write a C program that creates file "myfile.txt" and write text to this file a character at a time.
Also read the content of file and display on monitor.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("C:\\Users\\Samip\\Desktop\\C\\samip.txt", "w");
    if (fp == NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File created\n");
        printf("Enter some text and enter new line at the end\n");
        while (1)
        {
            ch = getchar();
            if (ch == '\n')
                break;
            fputc(ch, fp);
        }
        printf("Written to file successfully...\n");
        fclose(fp);
        getch();
        printf("Opening file for read purpose...");
        getch();
        fp = fopen("C:\\Users\\Samip\\Desktop\\C\\samip.txt", "r");
        if (fp == NULL)
        {
            printf("File not opened\n");
        }
        else
        {
            printf("File opened\n");
            while (1)
            {
                ch = fgetc(fp);
                if (ch == EOF)
                    break;
                printf("%c", ch);
            }
        }
        fclose(fp);
    }
}

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
