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