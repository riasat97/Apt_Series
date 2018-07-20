//Write the program to print the following outputs using for loops.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

void halfPyramidUsingSameDigit(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
        printf("%d ",i);
    printf("\n");
  }
}
void halfPyramidUsingStar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
void halfPyramidUsingIncrementalDigit(int n){
    for(int i=1;i<=n;i++){
        for(int j=1,k=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}
void fullPyramidUsingStar(int n){
    int size;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
//C Program to Print 1 232 34543 4567654 567898765
void fullPyramidUsingNumberPattern(int n){
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=i;j<2*i-1;j++)
            printf("%d",j);
        for(int j=2*i-1;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }
}
//1 23 456 78910
void floydTriangle(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}
//1 35 7911
void floydTriangleOdd(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k+=2;
        }
        printf("\n");
    }
}
//1  1 1  1 2 1   1 3 3 1
void pascalTriangle(int n){ //pascal fact icj
    for(int i=0;i<n;i++){
        for(int space=1;space<n-i;space++)
            printf(" ");
        for(int j=0;j<=i;j++){
            int res= fact(i)/(fact(j)*fact(i-j));
            printf("%2d",res);
        }
        printf("\n");
    }
}
int fact(int n){
    if(n==0 || n==1)return 1;
    return n*fact(n-1);
}
int main(){

  int i,j,n;
  printf("No of rows :\n");
  scanf("%d",&n);
  printf("\n");
  halfPyramidUsingSameDigit(n);
  printf("\n");
  halfPyramidUsingStar(n);
  printf("\n");
  halfPyramidUsingIncrementalDigit(n);
  printf("\n");
  fullPyramidUsingStar(n);
  printf("\n");
  fullPyramidUsingNumberPattern(n);//***
  printf("\n");
  floydTriangle(n);
  printf("\n");
  floydTriangleOdd(n);
  printf("\n");
  pascalTriangle(n);
  printf("\n");
  invertedPyramidUsing(n);
  printf("\n");
  diamond(n);
  printf("\n");
  fullPyramidUsingAlphabetPattern(n);
  printf("\n");
  fullTriangleUsingNumberPatternAlt(n);
  printf("\n");
  fullTriangleUsingNumberPattern(n);
  printf("\n");
  fibonacciTriangle(n);
  printf("\n");
  shapeCustom();
  return 0;
}
void invertedPyramidUsing(int n){
    for(int i=n;i>0;i--){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++)
                printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
void diamond(int n){
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=1;j<=(2*i-1);j++)
            printf("*");
        printf("\n");
    }
}

void fullPyramidUsingAlphabetPattern(int n){
    int ch=65;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=i;j<(2*i-1);j++)
            printf("%c",ch++);

        for(int j=(2*i-1);j>=i;j--)
            printf("%c",ch--);
        printf("\n");
        ch=65;

    }
}

void fullTriangleUsingNumberPattern(int n){

    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d",j);

        for(int j=i-1;j>=1;j--)
            printf("%d",j);
        printf("\n");
    }
}
void fullTriangleUsingNumberPatternAlt(int n){

    for(int i=1,k=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            printf(" ");
        for(int j=i;j<2*i-1;j++)
            printf("%d",k++);

        for(int j=2*i-1;j>=i;j--)
            printf("%d",k--);
        printf("\n");
        k=1;
    }
}
void fibonacciTriangle(int n){

    for(int i=1;i<=n;i++){
         printf("%d",1);
        int a=0,b=1,sum=1;
        for(int j=1;j<i;j++){
           printf("%d",sum);
           a=b;
           b=sum;
           sum=a+b;
        }
        printf("\n");
    }
}
//5 45 345 2345 12345 012345
void shapeCustom(){
    //21 mintues
    for(int i=1,v=5;i<=6;i++,v--){
        for(int j=1,o=v;j<=i;j++)
            printf("%d",o++);
        printf("\n");
    }
    printf("\n after nxt try \n");
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=1,o=n-i;j<=i;j++)
            printf("%d",o++);
        printf("\n");
    }


}

int evenAlpha(){
   int i,j,sp,n=5;
   for(i=1;i<=n;i++){
    for(sp=1;sp<=n-i;sp++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        if(j%2==0)
            printf("A");
        else printf("*");
    }
    printf("\n");
   }
}
int revTriangle(){
   int i,j,sp,n=5;
   for(i=n;i>=0;i--){
        for(sp=1;sp<=n-i;sp++)
            printf(" ");
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
   }
}
int r8sidePlusrev(){
   int i,j,sp,n=5;
   for(i=1;i<=n;i++){
       for(sp=1;sp<=n-i;sp++)
            printf(" ");
    for(j=1;j<=i;j++){
        printf("*");

    }
    printf("\n");
   }
   for(i=n-1;i>=0;i--){
       for(sp=1;sp<=n-i;sp++)
            printf(" ");
    for(j=1;j<=i;j++){
        printf("*");

    }
    printf("\n");
   }
}
int cus(){
   int i,j,sp,n=5,k=1;
   for(i=1;i<=n;i++){
//       for(sp=1;sp<=n-i;sp++)
//            printf(" ");
    for(j=1,k=1;j<=i;j++,k+=2){
        printf("%d ",k);

    }
    printf("\n");
   }

}
