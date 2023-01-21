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