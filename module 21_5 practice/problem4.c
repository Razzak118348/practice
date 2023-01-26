#include<stdio.h>
int even_print(int n)
{
  for(int i=2;i<=n;i++)
   {
      if(i%2==0)
      printf("%d ",i);
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    even_print(n);
}