//16. Write a C program that reads 10 numbers and find frequency of each element.

#include <stdio.h>
#define N 10

int main(){
    int x[N], fr[N];
    int i, j, count;
    printf("Enter the %d numbers:\n", N);
    for (i=0; i<N; i++){
        scanf("%d", &x[i]);
    }
    //storing dummy value
    for (i=0; i<N; i++){
        fr[i] = -1;
    }
    for (i=0; i<N; i++){
        count = 1;
        for (j=i+1; j<N; j++){
            if (x[i] == x[j]){
                count = count +1;
                x[j] = 0; //to avoid counting same element
            }
        }
        if (x[i] != 0){
            fr[i] = count;
        }
    }
    for (i=0; i<N; i++){
        if (x[i] != 0){
            printf("Frequency of %d = %d\n", x[i], fr[i]);
        }
    }
    return 0;
}