#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    if(n<0)
    {
        int a=-n;
        for(int i=n;i<=a;i++)
        {
            printf("%d ",i);
        }
    }
    else if(n>0)
    {
        int a=-n;
        for(int i=n;i>=a;i--)
        printf("%d ",i);
    }
}