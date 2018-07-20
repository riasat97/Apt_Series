#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int duplicate(int *arr,int size,int dup[size][size-1]){
    int i,j,k;
    for( i=0;i<size-1;i++){
        for( j=i+1,k=0;j<size;j++){
            if(arr[i]==arr[j]){
                  dup[i][k++]=j;
            }
        }
    }
}
int main (){
    int arr[]={0,3,3,1,1},count=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    int dup[size][size-1];
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++)
            dup[i][j]=0;
    }
    duplicate(arr,size,dup);
    for(int i=0;i<size;i++){
        if(dup[i][0]){
            int r=sizeof(dup)/sizeof(dup[0]);
            for(int j=0;j<r;j++){
                 if(dup[i][j])
            printf("arr[%d][%d]=%d\n",i,j,dup[i][j]);
            }
        }
    }
}

