#include<stdio.h>
int fun(int n)
{
  if(n==0) return 0;
  return n+fun(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int k=fun(n);
    printf("%d",k);
}