#include<stdio.h>
void pattern(int x);
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}
void pattern(int x)
{
    int a=(2*x)-1;
    for(int i=0;i<x;i++)
    {   if(i>0)
      {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
      }
     for(int j=0;j<a;j++)
        {   
            printf("*");
        }
        printf("\n");
        a-=2;
    }
}
