/*
Testing if a given number is prime
    Write a C function test_prime() that takes in a positive number as input and returns true
    (1) if the input number is prime or false (0) if the input is not prime. The function should
    return (-1) if the number is not positive.
Function prototype is given below:
    int test_prime(int num);
*/

#include<stdio.h>

int test_prime(int num){
    if(num<0){return(-1);}
    for(i=2; i*i<num; i++){
        if(num%i==0){}
    }

}

int main() {
    int num=5;
    test_prime(num);
}