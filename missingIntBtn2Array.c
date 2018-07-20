#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,3,1,0,5};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int missing[size1],k=0,i,j,m;
    for( i=0;i<size1;i++){
        for( j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
               break;
            }
        }
        if(j==size2)missing[k++]=arr1[i];
    }
    printf("Missing elements are :\n");
    for(int i=0;i<k;i++){
        printf("%4d",missing[i]);
    }
}
