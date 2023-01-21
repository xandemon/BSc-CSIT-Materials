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