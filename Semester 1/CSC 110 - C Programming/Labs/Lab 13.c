//13. Write a C program that searches key alement in an array

#include <stdio.h>
#define N 10

int main(){
    int x[N] = {10, 20, 110, 30, 70, 22, 38, 67, 54, 121};
    int i, t = 0, key = 110;

    for (i=0; i<N; i++){
        if (key == x[i]){
            t=1;
            break;
        }
    }
    if (t == 1){
        printf("\nKey item found in the array.\n");
    }
    else{
        printf("\nKey item not found in the array.\n");
    }
    return 0;
}