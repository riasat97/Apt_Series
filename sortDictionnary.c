#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
//C Program to Sort Elements in Lexicographical Order (Dictionary Order)

int main(){
    char str[5][50],temp[50];
    int i,j,size=5;
    printf("Enter 5 words :\n");
    for(i=0;i<5;i++)
        gets(str[i]);

    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(strcmp(str[j],str[j+1])>0){
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
            }
        }
    }
    puts("In Dictionary Order :");
    for(i=0;i<5;i++)
        puts(str[i]);
}
