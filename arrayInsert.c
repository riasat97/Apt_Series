#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 5
int main(){
    int arr[10]={1,2,3,4,5};
    int val=10,i;
    int position=3;
    for(i=SIZE;i>=position;i--){
         arr[i]=arr[i-1];
    }
    arr[position-1]=val;
    for(i=0;i<=SIZE;i++)
        printf("%4d",arr[i]);
}
