//11. Write a program that prints prime numbers from 200 to 300.

#include<stdio.h>

int main(){
    int i, j, t, p;
    printf("Prime numbers from 200 to 300 are:\n");
    for (i=200; i<=300; i++){
        t = 0;
        for (j=1; j<=i; j++){
            if (i%j==0){
                t++;
            }
        }
        if (t==2) printf("%d  ", i);
    }
    return 0;
}