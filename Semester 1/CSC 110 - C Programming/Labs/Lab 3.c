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