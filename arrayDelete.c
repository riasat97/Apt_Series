#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 5
int main(){
    int arr[10]={1,2,3,4,5};
    int position=3,i;
    for(i=position-1;i<SIZE;i++){
         arr[i]=arr[i+1];
    }
    for(i=0;i<SIZE-1;i++)
        printf("%4d",arr[i]);
}
