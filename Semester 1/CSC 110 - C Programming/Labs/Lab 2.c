//2. Write a program that reads marks of five subjects of a student and checks whether the student is pass or fail. (PM=40)

#include<stdio.h>

int main(){
    int C, Phy, Maths, DL, IIT;
    printf("Enter marks in C, Phy, Maths, DL and IIT respectively:\n");
    scanf("%d%d%d%d%d", &C, &Phy, &Maths, &DL, &IIT);

    if (C>=40 && Phy>=40 && Maths>=40 && DL>=40 && IIT>=40){
        printf("The student is pass :)\n");
    }
    else{
        printf("The student is fail :(\n");
    }
    return 0;
}