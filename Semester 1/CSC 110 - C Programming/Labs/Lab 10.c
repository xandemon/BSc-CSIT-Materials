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