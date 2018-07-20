#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//number system //
int main()
{
   // binary2decimal();
  // binary2decimalWithUsingPow();
    //decimal2binary();
    //decimal2binaryUsingArray();

   // binary2octal();
    octal2binary();
    return 0;
}

void binary2decimal(){
    int n;
    printf("Enter binary :\n");
    scanf("%d",&n);
    int bin=n,i=0,dec=0,rem;
    while(bin){
        rem=bin%10;
        if(rem)dec+=pow(2,i);
        i++;
        bin/=10;
    }
    printf("binary %d -> decimal %d ",n,dec);
}
void binary2decimalWithUsingPow(){
    int n;
    printf("\nEnter binary :\n");
    scanf("%d",&n);
    int bin=n,i=1,dec=0,rem;
    while(bin){
        rem=bin%10;
        dec+=i*rem;
        i*=2;
        bin/=10;
    }
    printf("binary %d -> decimal %d \n",n,dec);
}
void decimal2binary(){
    int n;
    printf("Enter a decimal value :\n");
    scanf("%d",&n);
    int dec=n,bin=0,rem,i=1;
    while(dec){
        rem=dec%2;
        bin+=rem*i;
        i*=10;
        dec/=2;
    }
    printf("decimal %d -> binary %d",n,bin);
}
void decimal2binaryUsingArray(){
    int n;
    printf("\nEnter a decimal value :\n");
    scanf("%d",&n);
    int dec=n,i=0,arr[20];
    while(dec){
        arr[i++]=dec%2;
        dec/=2;
    }
    printf("decimal %d-> binary ",n);
    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}
void binary2octal(){
    int n;
    printf("\nEnter a binary value :\n");
    scanf("%d",&n);
    int bin=n,rem,dec=0,base=1;
    while(bin){
        rem = bin%10;
        dec+= base*rem;
        base*=2;
        bin/=10;
    }
    int oct=0;
    base=1;
    while(dec){
        rem=dec%8;
        oct+=base*rem;
        base*=10;
        dec/=8;
    }
    printf("binary %d -> octal %d",n,oct);
}
void octal2binary(){
    int n;
    printf("\nEnter a octal value :\n");
    scanf("%d",&n);
    int oct=n,rem,dec=0,base=1;
    while(oct){
        rem=oct%10;
        dec+=base*rem;
        base*=8;
        oct/=10;
    }
    printf("\noctal %d -> decimal %d\n",n,dec);
    int bin=0;
    base=1;
    while(dec){
        rem=dec%2;
        bin+=base*rem;
        base*=10;
        dec/=2;
    }
    printf("octal %d -> binary %d",n,bin);
}
void hex2dec(char* hex){
    int dec=0,base=1,rem;
    int i;
    for(i=strlen(hex)-1;i>=0;i--){
        if(hex[i]>='A'&&hex[i]<='Z'){
            dec+=(hex[i]-55)*base;
            base*=16;
        }
        else if(hex[i]>='0'&&hex[i]<='9'){
            dec+=(hex[i]-'0')*base;
            base*=16;
        }
    }
    printf("%d",dec);
}
//first learn binary to decimal and decimal to binary
/*
decimal to binary = /2
decimal to octal = /8
decimal to hexadecimal = /16

binary to decimal = /10
binary to octal = binary to decimal = decimal to octal
binary to hexadecimal = binary to decimal = decimal to hexadecimal

octal to binary = octal to decimal (like binary to decimal ,just change 2 to 8)  =decimal to binary
octal to hexadecimal = octal to decimal (like binary to decimal ,just change 2 to 8)  =decimal to hexadecimal

hexadecimal to binary = hexadecimal to decimal (like binary to decimal ,just change 2 to 16) = decimal to binary
hexadecimal to octal = hexadecimal to decimal (like binary to decimal ,just change 2 to 16) = decimal to octal

*/
//https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/
