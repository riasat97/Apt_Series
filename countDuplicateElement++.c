#include <stdio.h>
#include<string.h>
int main(){
    int arr[]={2,4,2,2,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    countDuplicateElements(arr,size);
    freqCountForEachElements(arr,size);
}
void countDuplicateElements(int *arr,int size){
    int i,j,c=0;
    for(int i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                c++;
                break;
            }
        }
    }
    printf("\nTotal Duplicates =%d\n",c);
}
void freqCountForEachElements(int *arr,int size){
    int i,j,c,freq[size];
    initializeArray(freq,size,-1);
    for(i=0;i<size;i++){
            c=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                c++;
                freq[j]=0;//make sure not to count duplicate value//SAME element peye gele oitar totoh tomo index k zero
            }
        }//outside 2nd loop
        if(freq[i]!=0)
             freq[i]=c;
    }
    for(i=0;i<size;i++){
        if(freq[i]!=0)
            printf("%d = %d times \n",arr[i],freq[i]);
    }
}
initializeArray(int *arr,int size,int val){
    for(int i=0;i<size;i++){
        arr[i]=val;
    }
}
