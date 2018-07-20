#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
//Write a c program to descending (Z-A) using selection sort?
void insertChar(char *arr){
    int i,ch=65;
    for(i=0;i<26;i++)
        arr[i]=(char)ch++;
}
void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(char *arr,int size){
    int i,j,max;
    for(i=0;i<size-1;i++){
            max=i;
        for(j=i+1;j<size;j++){
            if(arr[max]<arr[j])
                max=j;
        }
        swap(&arr[i],&arr[max]);
    }
}
void printArray(char *arr,int size){
    int i;
    for(i=0;i<size;i++)
        printf("%4c",arr[i]);
}
int main(){
    char arr[26];
    insertChar(arr);
    int size=26;
    selectionSort(arr,size);
    printArray(arr,size);
}
