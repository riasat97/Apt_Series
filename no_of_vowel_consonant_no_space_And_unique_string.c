#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
// User will enter a sentence or word, you have to find out how many consonant ,
//vowel , number and space on the sentence.

//char *strToLower(char ch){
//    if(ch>='a'&& ch<='z')return ch;
//    if(ch>='A' && ch<='Z')return ch+32;
//    if(ch>=47 && ch<=56)return (int)ch;
//    return 0;
//}
int main(){
   char str[100],ch;
   int v=0,c=0,n=0,sp=0;
   puts("Enter Sentence..");
   gets(str);
   int len=strlen(str);
   for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
        if(tolower(str[i])==tolower(str[j])){
            for(int k=j;k<len;k++){
               str[k]=str[k+1];
            }
             len--;
             j--;
        }

    }
   }
   puts("Unique :");
   puts(str);
   for(int i=0;str[i]!='\0';i++){
      ch=str[i];
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') ++v;
      else if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z') ++c;
      else if(ch>='0' && ch<='9') ++n;
      else if(ch == ' ')++sp; // single quote for char
   }
   printf("vowel = %d consonat = %d number = %d space =%d ",v,c,n,sp);
}

