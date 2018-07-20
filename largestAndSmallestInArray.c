#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    largestAndSmallest(arr,size);
    //largest(arr,size);
    //smallest(arr,size);
}
void largestAndSmallest(int *arr,int size){
    int i,min=arr[0],max=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("min=%d\n max=%d \n",min,max);
}
void largest(int *arr,int size){
    int max=arr[0],i=0;
    while(i<size){
        if(arr[i]>max)
            max=arr[i];
        i++;
    }
    printf("max =%d\n",max);
}
void smallest(int *arr,int size){
    int i,min=arr[0];
    for(i=0;i<size;i++){
       if(arr[i]<min)
            min=arr[i];
    }
    printf("min = %d",min);
}
