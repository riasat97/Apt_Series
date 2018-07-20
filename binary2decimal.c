#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int bin=111;
    int n=bin,decimal=0,base=1,rem;
    while(n){
        rem=n%10;
        decimal=decimal+base*rem;
        base*=2;
        n=n/10;
    }
    printf("binary %d-> decimal %d",bin,decimal);
}
