#include<stdio.h>
int main ()
{
    int i,n ,j,k ;
    scanf("%d",&n);
    for(i=n;i>=1;i--)//ekhane i=1 ar i<=n ;i++ dile poro pattarn change hoye jabe;
    {
        for(j=1;j<=i;j++) printf(" ");
        for(k=1;k<=n;k++) printf("*");
        printf("\n");
    }
}