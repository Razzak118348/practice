#include<stdio.h>
int count(int n,int ary[n]);
int main()
{
    int n;
    scanf("%d\n",&n);
    int ary[n];
   
 int k=count(n,ary);
 printf("%d",k);
}
int count(int n,int ary[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int k,count=0;
    scanf("%d",&k);  
    for(int i=0;i<n;i++)
    {
        if(ary[i]>k)
        count++;
    }
    return count;
}