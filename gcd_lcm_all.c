#include <stdio.h>
#include <stdlib.h>
int reGcd(int a,int b){
     // Everything divides 0
    if (a == 0 || b == 0)
       return 0;
    if(a==b)return a;
    if(a>b)
        reGcd(a-b,b);
    else
        reGcd(a,b-a);
}
int gcd(int a,int b){
     // Everything divides 0
    if (a == 0 || b == 0)
       return 0;
    while(a!=b){
        if(a>b)a-=b;
        else b-=a;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
//    gcdArr();
//    return ;
    int a,b;
    printf("Enter 2 numbers :");
    scanf("%d%d",&a,&b);
    // if user enters negative number, sign of the number is changed to positive
    a = ( a > 0) ? a : -a;
    b = ( b > 0) ? b : -b;
    printf("gcd of %d and %d is : %d\n",a,b,gcdFor(a,b));
    printf("LCM of %d and %d is : %d",a,b,lcm(a,b));
    return 0;
}
int gcdArr(){
    int arr[]={2,4,6,8,16};
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=arr[0];
    for(int i=1;i<size;i++){
        res=gcd(arr[i],res);
    }
    printf("\ngcd : %d\n",res);
    res=arr[0];
    for(int i=1;i<size;i++){
        res=(arr[i]*res)/gcd(arr[i],res);
    }
    printf("lcm : %d\n",res);
}
int lcmWhile(int a,int b){
    int minMultiple=(a>b)?a:b;
    while(1){
        if(minMultiple%a==0 && minMultiple%b==0)
            break;
        minMultiple++;
    }
    return  minMultiple;
}
int gcdFor(int a,int b){
    int gcd;
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    return gcd;
}

