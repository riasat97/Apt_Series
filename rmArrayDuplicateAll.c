#include <stdio.h>
#include<string.h>
#define SIZE 6
void printArray(int *arr,int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%3d",arr[i]);
    }
}

void rmDuplicate(int *arr,int size){
    int i,j,k,n=size;
    for( i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                    //printf("i=%d %d",i,arr[k])
                }
                j--;
                n--;
            }
        }
    }
    printArray(arr,n);
}
void rmElementFromArray(int *arr,int size,int key){
    int i,k;
    for(i=0;i<size;i++){
        if(arr[i]==key){
            for(k=i;k<size;k++){
                arr[k]=arr[k+1];
            }
            size--;
            i--;
        }
    }
    printArray(arr,size);
}
void rmElementFromArrayUsingTemp(int *arr,int size,int key){
    int i,temp[size],k=0;
    for(i=0;i<size;i++){
        if(arr[i]!=key){
           temp[k++]=arr[i];
        }
    }
    printArray(temp,k);
}
void rmPositionFromArray(int *arr,int size,int pos){
    int i;
    for(i=pos-1;i<size;i++)
        arr[i]=arr[i+1];
    printArray(arr,size-1);
}
int main(){
    int arr[]={2,4,2,2,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    rmDuplicate(arr,size);
    //rmElementFromArray(arr,size,2);
    //rmElementFromArrayUsingTemp(arr,size,2);
   //rmPositionFromArray(arr,size,5);
}

/*
*/
