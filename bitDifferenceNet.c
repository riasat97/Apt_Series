#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main (){
    int a=31,b=14,count=0;
    int c = a ^ b;
  //Count number of SET bits in "c"
  while(c!=0){
   c = c &(c-1);
   count++;
  }
    printf("Count number of Bits to be flipped to convert A=%d to B=%d and %d = %d",a,b,count);
}
//http://javabypatel.blogspot.in/2017/01/count-number-of-bits-to-convert-a-to-b.html
