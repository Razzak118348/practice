#include<stdio.h>
void hi(int x)
{
   for(int i=1;i<=x;i++)
   {
     if(x%i==0)
     {
       printf("%d ",i);
     }
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    hi(n);
}