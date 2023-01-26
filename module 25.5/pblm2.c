#include<stdio.h>
int largest(int n,int ary[n],int k);
int smallest(int n,int ary[n],int k);
int sort(int n,int ary[n]);

int main()
{
    int n,i,k;
    scanf("%d",&n);
    int ary[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    scanf("%d",&k);
    int m=largest(n,ary,k);
    int l=smallest(n,ary,k);
    printf("%dth largest element =%d\n",k,m);
    printf("%dth largest element =%d",k,l);
    // here largest means the sorting ary position largest
    // here the smallest means the sorting ary position smallest
}

int largest(int p,int ary[p],int k)
{
    ary[p]=sort(p,ary);
    return ary[p-k];
}
int smallest(int y,int ary[y],int k)
{
    ary[y]=sort(y,ary);
    return ary[k-1];
}
int sort(int n,int ary[n])
{
    for(int g=0;g<n;g++)
    {
        for(int h=0;h<n;h++)
        {   if(ary[h]>ary[h+1])
        {
            int temp=ary[h];
            ary[h]=ary[h+1];
            ary[h+1]=temp;
        }
        }
    }
    return ary[n];
}