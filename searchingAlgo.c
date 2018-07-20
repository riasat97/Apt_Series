#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int binarySearch(int *arr,int low,int high,int key){
   int mid;
   if(low<=high){
    mid=low+(high-low)/2;
    if(arr[mid]==key)return mid;
    if(key>arr[mid])return binarySearch(arr,mid+1,high,key);
    return binarySearch(arr,low,mid-1,key);
   }
   return -1;
}
// Binary search has time complexity O(log n).
int main(){
   int numberContainer[]={5,9,13,20,26};//has to be sorted array and has to have direct access to the middle element
   int size = sizeof(numberContainer)/sizeof(numberContainer[0]);
   int key=20;
   int index=binarySearch(numberContainer,0,size-1,key);
   if(index>=0)
    printf("key %d is found at index :%d ",key,index);
   else printf("Item %d is not found",key);
}
int linearSearch(int *arr,int size,int key){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
//The time complexity of above algorithm is O(n).
//Linear search is rarely used practically because other search algorithms such as the binary search algorithm and
//hash tables allow significantly faster searching comparison to Linear search.


//Important Differences


//BASIS FOR COMPARISON	LINEAR SEARCH	BINARY SEARCH
//Time Complexity|	    O(N)	        O(log 2 N)
//Best case time|	       First Element O(1)	Center Element O(1)
//Prerequisite for an array|	No required  	Array must be in sorted order

//Can be implemented on|	Array and Linked list	Cannot be directly implemented on linked list
//Insert operation|	Easily inserted at the end of list	Require processing to insert at its proper place to maintain a sorted list.
//Algorithm type|	Iterative in nature	Divide and conquer in nature
//Lines of Code|	Less	More
//Worst case for N number of elements|N comparisons are required	Can conclude after only log2N comparisons
