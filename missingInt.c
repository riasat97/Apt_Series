#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void insertArray(int *arr,int size,int miss){
    int i,j=1;
    for(int i=1;i<=size;i++){
        if(i==miss){
            continue;
        }
        arr[j++]=i;
    }
}
int findMissingInt(int *arr,int low,int size){
    int sum= (size*(size+low))/2,i;
    for(i=1;i<size;i++){
        sum-=arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    insertArray(arr,100,39);
    int missed=findMissingInt(arr,1,100);
    printf("missing =%d",missed);
}

/*
*/
