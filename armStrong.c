#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int num=153;
    int n=num,c=0,armStrong=0,rem;
    while(n){
        c++;
        n=n/10;
    }
    n=num;
    while(n){
        rem=n%10;
        armStrong+=power(rem,c);
        n=n/10;
    }
    (num==armStrong)?printf("%d is arm strong number",num):printf("%d not an arm strong number",num);
}

int power(int b,int e){
    if(e==0)return 1;
    return b*power(b,e-1);
}
