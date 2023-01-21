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