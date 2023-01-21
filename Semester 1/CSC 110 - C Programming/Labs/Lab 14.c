//14. Write a C program that checks if the array contains duplicate elements

#include <stdio.h>
#define N 10

int main(){
    int x[N] = {20, 110, 30, 110, 70, 22, 38, 67, 54, 121};
    int a, i, j, t=0;

    for (i=0; i<N; i++){
        for (j = i+1; j<N; j++){
            if (x[i] == x[j]){
                a = x[i];
                t=1;
                break;
            }
        }
    }
    if (t == 1){
        printf("Array contains duplicate element: %d", a);
    }
    else{
        printf("Array doesn't contain any duplicate element.");
    }
    return 0;
}