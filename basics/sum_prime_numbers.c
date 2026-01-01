/*
Sum of prime numbers in a range 
    Write a function prime_sum() that computes the sum of all the prime numbers in the 
    range (start - end) specified in the input. You have at your disposal a function 
    test_prime(int) that returns 1 if the input is a prime number, 0 otherwise. The 
    function int test_prime(int input) is defined elsewhere. 
The function prototype is given below: 
    long prime_sum(int start, int end);
*/

#include<stdio.h>
#include<stdbool.h>

int test_prime(int n){
    int count=0;
    if(n==0 || n==1){
        return(0);
    }
    else{
        for(int i=1; i<=n; i++){
            if(n%i==0){
                count = count+1;
            }
            if(count>2){
                return(0);
            }
        }
        return(1);
    }
}

long prime_sum(int start, int end){
    long sum=0;
    for(int i=start;i<=end;i++){
        bool isPrime = test_prime(i);
        if(isPrime){
            sum+=i;
        }
    }
    return(sum);
}

int main(){
    printf("%ld \n",prime_sum(2,90));
    return(0);
}