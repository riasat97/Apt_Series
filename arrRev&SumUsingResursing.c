#include <stdio.h>
//
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int rev[size];
    int sum=sumInt(arr,size-1);
   // int sum=sumIntUsingStatic(arr,size);
    printf("\nSUM =%d\n",sum);
    reverseArray(arr,rev,size-1);
    printArr(rev,size);
}
int sumInt(int *arr,int size){
    if(size<0)return 0;
    return arr[size]+sumInt(arr,size-1);
}
int sumIntUsingStatic(int *arr,int size){
    static int i=0,sum=0;
    if(i==size) return sum;
       sum+=arr[i++];
       sumIntUsingStatic(arr,size);
}
void reverseArray(int *arr,int *rev,int size){
    static int i=0;
    if(size<0) return;
    rev[i++]=arr[size];
    reverseArray(arr,rev,size-1);
}
void printArr(int *arr,int size){
    for(int i=0;i<size;i++)
        printf("%4d",arr[i]);
}
/*
*/
