#include <std#include<stdio.h>
void arrRev(int *arr,int *rev,int high){
    static int low=0;
    if(high<0)return;
    rev[low++]=arr[high--];
    arrRev(arr,rev,high);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int rev[size];
    arrRev(arr,rev,size-1);
    for(int i=0;i<size;i++)
    printf("%2d",rev[i]);
}
io.h>
#include<string.h>
#define SIZE 6
void printArray(int *arr,int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%3d",arr[i]);
    }
}
void addElementInArray(int *arr,int size,int pos,int val){//right shift
    int i;
    for(i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
   // arr[i]=val;
    arr[pos-1]=val;
    printArray(arr,size+1);
}
int main(){
    int arr[]={2,4,6,10,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    addElementInArray(arr,size,4,8);
}

/*
*/
