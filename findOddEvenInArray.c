#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
    int num[10],even[10]={0},odd[10]={0},n,e=0,o=0;
    puts("Enter no. of elements :");
    scanf("%d",&n);
    printf("enter %d numbers :\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(int i=0;i<n;i++){
        if(num[i]%2==0)even[e++]=num[i];
        else odd[o++]=num[i];
    }
    printf("Even numbers are :");
    for(int i=0;i<e;i++)
        printf("%4d ",even[i]);
    printf("\n Odd numbers are :");
    for(int i=0;i<o;i++)
        printf("%4d ",odd[i]);


}


