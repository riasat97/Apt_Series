#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 5
int main(){
    int arr[4]={7,5,6,4},count=0;
    int arr1[4][3]={0};
    for(int i=0;i<4;i++){
        for(int j=0,k=0;j<4;j++){
            if(arr[i]>arr[j]){
                count++;
                arr1[i][k++]=arr[j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr1[i][j]!=0)
                printf("(%d,%d)\n",arr[i],arr1[i][j]);
        }
    }
}
