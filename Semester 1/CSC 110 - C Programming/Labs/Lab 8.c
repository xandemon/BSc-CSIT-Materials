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