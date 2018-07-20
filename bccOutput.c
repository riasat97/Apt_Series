#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
    int i=-20, j=-1, k=2, m;
    m = ++i && ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
}
