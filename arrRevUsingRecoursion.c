#include<stdio.h>
void arrRev(int *arr,int *rev,int low,int high){
    if(high<0)return;
    rev[low++]=arr[high--];
    arrRev(arr,rev,low,high);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int rev[size];
    arrRev(arr,rev,0,size-1);
    for(int i=0;i<size;i++)
    printf("%2d",rev[i]);
}
