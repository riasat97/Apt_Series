#include <stdio.h>
#include <stdlib.h>
// Reverse an Interger

int main(){
    int n,num,rem,rev=0;
    puts("Enter number :");
    scanf("%d",&num);//121
    n=num;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("revers of %d is %d \n",num,rev);
    (rev==num)?printf("%d = %d = palindrome",num,rev):printf("%d != %d = Not palindrome",num,rev);
}

