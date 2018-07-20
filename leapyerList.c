// c program for age calculator
#include <stdio.h>
#include <stdlib.h>

isLeapYear(int year){
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return 1;
            }
            else return 0;
        }
        else return 1;
    }
    return 0;
}

int main()
{
    int high=2020;
    int low=1700;
    printf("Leaper in given range :\n");
    for(low;low<=high;low++){
        if(isLeapYear(low)){
            printf("%d\n",low);
        }
    }
    return 0;
}
