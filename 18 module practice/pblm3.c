#include<stdio.h>
int main()
{
    int n,a,i,sum=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        a=b[i]%10;
        sum=sum+a;
    }
    printf("sum = %d",sum);
}