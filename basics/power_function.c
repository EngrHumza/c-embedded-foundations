/*
Computing x to the power y (xy) 
Write a function that takes two integers (x and y) as input,
and computes x to the power y and returns the result. No bui-in
library functions for computing power may be used. 
    Use loops instead. Function prototypes is given below: 
    long x_pwr_y(int x, int y);
*/
long x_pwr_y(int x, int y){
    if(x==0){
        return(x);
    }
    else if(y==0){
        return(1);
        }
        else{
            long result=1;
            for(int i=0; i<y; i++){
                result=result*x;
            }
            return(result);
        }
}
//main function
int main() {
    long pwrr=x_pwr_y(2,3);
    printf("%ld \n", pwrr);
    return 0;
}