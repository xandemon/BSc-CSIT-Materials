//17. Write a C program to find the sum, difference and product of two 3*3 matrices.

#include <stdio.h>

int main(){
    int i, j, k, s=0;
    int m1[3][3], m2[3][3], sum[3][3], diff[3][3], product[3][3];

    //first matrix input
    printf("\nEnter the elements of first 3x3 matrix (row-wise)\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    //second matrix input
    printf("\nEnter the elements of second 3x3 matrix (row-wise)\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    //test print
    printf("\nFirst Matrix\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    //computing sum and diff
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
            diff[i][j] = m1[i][j] - m2[i][j];
        }
    }
    //computing product
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            s=0;
            for (k=0; k<3; k++){
                s = s + m1[i][k] * m2[k][j];
            }
            product[i][j] = s;
        }
    }

    //printing the result
    printf("The sum of matrices is\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("The difference of matrices is\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    printf("The product of matrices is\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}