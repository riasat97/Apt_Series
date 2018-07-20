#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
    int num=145;
    int n=num,rem,strong=0;
    while(n){
        rem=n%10;
        strong+=fact(rem);
        n=n/10;
    }
    (num==strong)?printf("%d strong number",num):printf("%d is not strong number",num);

}

int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
