/*
Calculate number of days since the Independence Day 
    Write a function num_indep_days() which computes the number of days elapsed 
    since 14th August 1947 to the date provided as input to the function. Remember that 
    February of each leap year has 29 days!
The function prototype is given below: 
    int num_indep_days(int day, int month, int year); 
*/

#include <stdio.h>

int isLEAPYEAR(int year){
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int num_indep_days(int day, int month, int year){
    const int BASE_YEAR = 1947;
    const int BASE_MONTH = 8; // August
    const int BASE_DAY = 14;  // 14th Aug
    int total_days = 0;

    const int mDAYS[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    // If the year is after 1947, count full years
    for(int y = BASE_YEAR; y < year; y++){
        total_days += 365;
        if(isLEAPYEAR(y))
            total_days += 1;
    }

    // Count months in the current year
    for(int m = 1; m < month; m++){
        total_days += mDAYS[m-1];
        if(m == 2 && isLEAPYEAR(year))
            total_days += 1;
    }

    // Add days in the current month
    total_days += day;

    // Subtract days before 14-Aug-1947
    int days_before_base = 0;

    // Add days in months before August 1947
    for(int m = 1; m < BASE_MONTH; m++)
        days_before_base += mDAYS[m-1];

    // Add days before 14th August 1947
    days_before_base += (BASE_DAY - 1);

    total_days -= days_before_base;

    return total_days;
}

int main(){
    int days = num_indep_days(12, 9, 1948);
    printf("Days since 14-Aug-1947: %d\n", days);
    return 0;
}
