/*
Converting time in (Hr-Min-Sec) to seconds 
Write a function called hms_to_secs() that takes three int
values for hours, minutes, 
and seconds—as arguments, and returns the equivalent time in
seconds (type long). 
    Function prototypes is given below: 
    long hms_to_secs(int hrs, int mins, int secs);
*/
#include <stdio.h>
struct h_m_s{
    int hrs;
    int mins;
    int secs;
};
long hms_to_secs(int hrs, int mins, int secs){
    return((hrs*3600L)+(mins*60L)+((long)(secs)));
}

//main function
int main() {
    // Write C code here
    struct h_m_s hmss = {10,10,10};
    long seconds=hms_to_secs(hmss.hrs, hmss.mins, hmss.secs); 
    printf("%ld \n", seconds);
    return 0;
}