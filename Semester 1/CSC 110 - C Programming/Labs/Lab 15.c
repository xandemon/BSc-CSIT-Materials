//15. Write a C program that reads 4 numbers and find the sum of squares

#include <stdio.h>
#define N 4

int main(){
    int x[N], sum=0;
    printf("\nEnter the %d numbers:\n", N);
    for (int i=0; i<N; i++){
        scanf("%d", &x[i]);
    }
    printf("The %d numbers are:\n", N);
    for (int i=0; i<N; i++){
        printf("%d ", x[i]);
    }
    //calculating sum
    for (int i=0; i<N; i++){
        sum = sum + (x[i]*x[i]);
    }
    printf("\nThe sum of squares of %d numbers is %d.", N, sum);
    return 0;
}