#include <stdio.h>
//
void rmCharFromStrUsingTemp(char ch,char *str){ //you can remove space also using this method
    char temp[50];
    int i,j=0;
    for(i=0;str[i];i++){
        if(ch != str[i])
            temp[j++]=str[i];
    }
    temp[j]='\0';
    puts(temp);
}
void rmCharFromStr(char ch,char *str){
    int i,j;
    for(i=0;str[i];i++){
        if(str[i]==ch){
            for(j=i;str[j];j++){
                str[j]=str[j+1];
            }
            i--;
        }
    }
    puts(str);
}
void rmChFromStrUsingPosition(char *str,int pos){
    int i;
    for(i=pos-1;str[i];i++){
        str[i]=str[i+1];
    }
    puts(str);
}
void rmDuplicateCharFromStr(char *str){
    int i,j,k;
    for(i=0;str[i];i++){
        for(j=i+1;str[j];j++){
            if(str[i]==str[j]){
                for(k=j;str[k];k++){
                    str[k]=str[k+1];
                }
                j--;
            }
        }
    }
    puts(str);
}
int main(){
   char str[50],ch;
   puts("Enter text :");
   gets(str);
   puts("Remove character :");
   scanf("%c",&ch);
   //rmCharFromStrUsingTemp(ch,str);
  // rmCharFromStr(ch,str);
   rmChFromStrUsingPosition(str,2);
  // rmDuplicateCharFromStr(str);
}

/*
*/
