#include <stdio.h>
#include <stdlib.h>
//Integer as a Sum of Two Prime Numbers
int isPrime(int n){
    if(n==0)return 0;
    int size= sqrt((double)n);
    for(int i=2;i<=size;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter Number :\n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(!isPrime(i))continue;
        if(isPrime(n-i))
        printf("%d + %d = %d \n",i,n-i,n);

    }
}
