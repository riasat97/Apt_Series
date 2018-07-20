#include<stdio.h>

int main(){
    int a=5,c,*b;
    b=&a;
    *b=88;
    a=99;
    printf("a=%d b=%d ",a,*b);

}
