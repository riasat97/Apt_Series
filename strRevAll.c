#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int getLength(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        count++;
    return count;
}
void reStrReverse(char *str,char *rev,int len){
    static int k=0;
    if(len<0) rev[k]='\0';
    else {
       rev[k++]=str[len--];
       reStrReverse(str,rev,len);
    }
}
void strReverse(char *str,char *rev){
   int len=getLength(str),k=0;
   for(int i=len-1;i>=0;i--){
    rev[k++]=str[i];
   }
   rev[k]='\0';
   printf("reverse of %s : %s",str,rev);
}
int main (){
   char str[100],rev[100];
   puts("Write something..");
   gets(str);
   //strReverse(str,rev);
   reStrReverse(str,rev,getLength(str)-1);
   printf("reverse of %s : %s",str,rev);
}

