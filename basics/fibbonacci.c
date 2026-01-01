/*
Compute nth item in the Fibonacci series 
    Write a function called nth_fibonacci() that takes an integer n as input and returns the 
    nth element in the Fibonacci series. The function should return (-1) if n is negative. 
Function prototypes is given below: 
    long nth_fibonacci(int n); 
*/

#include<stdio.h>

long nth_fibonacci(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int x0=0;
    int x1=1;
    int x2=0;
    for(int i=2; i<n; i++){
        x2=x1+x0;
        x0=x1;
        x1=x2; 
    }
    return x2;
}

int main(void){
    int n=7;
    printf("nth term of Fibonacci Series is: %ld \n",nth_fibonacci(n));
    return 0;
}