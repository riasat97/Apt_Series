#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=10;j>=0;j--){
            if(i==j){
                printf("*");
                break;
            }
            else{
                printf("0");
            }
            printf("\n");
        }
    }
}
