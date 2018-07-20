#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
//swap three numbers in
//void r8Rotate(int *a,int *b,int *c){
//    int temp;
//    temp=*b;
//    *b=*a;
//    *a=*c;
//    *c=temp;
//
//}
void r8Rotate(int *a,int *b,int *c){
    int temp;
    temp=*a;
    *a=*c;
    *c=*b;
    *b=temp;


}
//void leftRotate(int *a,int *b,int *c){
//    int temp;
//    temp=*b;
//    *b=*z;
//    *z=*x;
//    *x=temp;
//}
void leftRotate(int *a,int *b,int *c){
    int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;

}
int main(){
    int x,y,z;
    printf("Enter three number :\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Before right rotate: x=%d y=%d z=%d\n",x,y,z);
    r8Rotate(&x,&y,&z);
    printf("After right rotate : x=%d y=%d z=%d\n",x,y,z);
    printf("Enter three number :\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Before Left rotate: x=%d y=%d z=%d\n",x,y,z);
    leftRotate(&x,&y,&z);
    printf("After Left rotate : x=%d y=%d z=%d\n",x,y,z);
    return 0;
}
