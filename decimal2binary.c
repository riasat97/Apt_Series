#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int decimal,n,binary=0,rem,sum=0,base=1;
    puts("Enter Decimal :");
    scanf("%d",&decimal);
    n=decimal;
    while(n){
        rem=n%2;
        binary+=(base*rem);
        base*=10;
        n/=2;
    }
    printf("decimal %d -> binary %d ",decimal,binary);
}
