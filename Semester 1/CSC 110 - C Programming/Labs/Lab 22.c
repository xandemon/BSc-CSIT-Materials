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
