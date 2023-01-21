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