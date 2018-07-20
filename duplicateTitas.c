#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int duplicate(int *arr,int size){
    int i,j,k,arr1[2];
    for( i=0;i<size-1;i++){
        for( j=i+1,k=0;j<size;j++){
            if(arr[i]==arr[j]){
               return j;
            }
        }
    }
    return -1;
}
int main (){
    int arr[]={0,3,3,1,1},*arr1,count=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    int index=duplicate(arr,size);
    printf("an item repeated at index %d",index);

}

