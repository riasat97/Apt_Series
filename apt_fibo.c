#include<stdio.h>

int fibo(int);

int main()
{
int n, i = 0, c;

scanf("%d", &n);

printf("Fibonacci series terms are:\n");

for (c = 1; c <= n; c++)
{
printf("%d ", fibo(i));
i++;
}

return 0;
}

int fibo(int n)
{
if (n == 0 || n == 1)
return n;
else
return (fibo(n-1) + fibo(n-2));
}

Output:
8
Fibonacci series terms are:
0 1 1 2 3 5 8 13
