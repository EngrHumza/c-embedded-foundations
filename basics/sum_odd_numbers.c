/*
Sum of odd numbers in a range:
    Write a function odd_sum() that computes and returns the sum of all the odd integers in
    a range of numbers. The range is defined by a start integer and an end integer.
Function prototypes is given below: 
    int odd_sum(int start, int end);
*/

#include<stdio.h>

int odd_sum(int start, int end){
    long o_sum=0;
    for(int i=start; i<=end; i++){
        if(i%2!=0){
            o_sum=o_sum+i;
        }
    }
    return(o_sum);
}

int main(){
    int start=2;
    int end=4;
    long sum_odd_numbers=0;
    sum_odd_numbers=odd_sum(start,end);    
    printf("%ld \n", sum_odd_numbers);
}