#include <stdio.h>
#include <stdlib.h>
// Power of a Number

void power(int b,int e){
    int res=1;
    for(int i=1;i<=e;i++)
        res*=b;
    printf("\npower(%d) of %d is %d\n",e,b,res);
    //another way
    res=b;
    for(int i=2;i<=e;i++)
        res*=b;
    printf("\npower(%d) of %d is %d\n",e,b,res);
}
int rePower(int b,int e){
    static int res=1;
    if(e){
    res*=b;
    rePower(b,e-1);
    }
    return res;
}
int rePowerAlt(int b,int e){
    if(e==0)return 1;
    return b*rePowerAlt(b,e-1);
}
int main(){
   int base,expo;
   puts("Enter Base and Exponent :");
   scanf("%d%d",&base,&expo);
   //power(base,expo);
   printf("\nPower(%d) of %d : %d",expo,base,rePowerAlt(base,expo));
}

