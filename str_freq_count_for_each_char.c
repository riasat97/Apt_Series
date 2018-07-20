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
void freqCountForEachChar(char *str,int *freq){
    int len=getLength(str);
    for(int i=0;i<len;i++){
        char ch=str[i];
        if(ch>='a'&& ch<='z')
            freq[ch-'a']++;
        else if(ch>='A'&&ch<='Z')
            freq[ch-'A']++;
    }
}
int main(){
    char str[100];
    int freq[26]={0};
    puts("Write something..:");
    gets(str);
    freqCountForEachChar(str,freq);
    for(int i=0;i<26;i++){
        if(freq[i])
        printf("%c = %d \n",97+i,freq[i]);

    }
}

