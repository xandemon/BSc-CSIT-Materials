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