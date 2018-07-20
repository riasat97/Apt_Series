#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int getLength(char *str){
    int count=0,i=0;
    while(str[i++]!='\0')
        count++;
    return count;
}
int removeChfromStr(char *str,char ch){
    //int len=getLength(str);
    int i;
     for( i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            for(int j=i;j<str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            i--;
        }

     }
 }
int main(){
    char str[100],cpy[100],ch;
    puts("Enter something :");
    gets(str);
    puts("Enter Character to remove from string:");
    scanf("%c",&ch);
    strcpy(cpy,str);
    removeChfromStr(str,ch);
    printf("after removing %c from %s : %s",ch,cpy,str);
}

