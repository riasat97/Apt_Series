#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int sorted(int *arr,int size){
    if(size==0)return 1;
    if(arr[size-1]>arr[size])return 0;
    sorted(arr,size-1);
}
int main(){
    int arr[]={0,2,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(sortedLoop(arr,size-1))
        printf("yes");
    else printf("no");
}
int sortedLoop(int *arr,int size){
    int i;
    for(i=1;i<size;i++){
        if(arr[i-1]>arr[i])
            return 0;
    }
    return 1;
}
int isSorted(int *arr,int size){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]>arr[i+1])
            return 0;
    }
    return 1;
}
/*
*/
