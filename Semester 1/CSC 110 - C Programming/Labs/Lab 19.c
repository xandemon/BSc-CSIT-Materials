//19. Write a program to find first 30 fibonacci series using recursion

#include<stdio.h>  
int Fibonacci(int x); 

int main(){    
    int n, i, c;
    printf("Enter no. of Fibonacci terms you want.\n");
    scanf("%d",&n);     
    printf("\nFibonacci series\n");     
    for ( i=0; i<n ; i++){       
        printf("%d\n", Fibonacci(i));
    }     
    return 0; 
}  
int Fibonacci(int x){    
    if (x == 0 ){
        return 0;
    }
    else if (x == 1){   
        return 1;
    }
    else{
        return (Fibonacci(x-1) + Fibonacci(x-2));
    }
}  