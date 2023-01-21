//12. Write a C program that reads 10 numbers and sorts them in ascending order

#include <stdio.h>
#define N 10

int main(){
    int i, j, temp, n[N];
    printf("Enter the %d numbers:\n", N);
    for (i=0; i<N; i++){
        scanf("%d", &n[i]);
    }
    printf("\nOrder of numbers before sorting:\n");
    for (i=0; i<N; i++){
        printf("%d  ", n[i]);
    }
    //sorting begins
    for(i=0; i<N; i++){
        for (j=0; j<(N-1); j++){
            if (n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    printf("\nOrder of numbers after sorting:\n");
    for (i=0; i<N; i++){
        printf("%d  ", n[i]);
    }
    return 0;
}