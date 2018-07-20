#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
void isNumPalindrome(){
     int num;
     puts("Enter number :");
     scanf("%d",&num);
    int n=num,rem,rev=0;
    while(n){
       rem=n%10;
       rev=rev*10+rem;
       n/=10;
    }
    (rev==num)?printf("%d = %d palindrome\n",num,rev):printf("%d != %d is not palindrome\n",num,rev);
}
void isStrPalindrome(){
    char str[100];
    puts("Write something..:");
    gets(str);
    int len=strlen(str);
    int i=0,j=len-1;
    while(i<j){
        if(str[i++]!=str[j--]){
        printf("%s is not palindrome\n",str);
        return;
        }
    }
    printf("%s is palindrome",str);
}
int main(){
    isNumPalindrome();
    getchar();
    isStrPalindrome();
}

