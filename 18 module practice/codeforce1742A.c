#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {  
        scanf("%d %d %d",&a,&b,&c);
        if(a==b+c) printf("YES\n");
        else if(c==a+b) printf("YES\n");
        else if(b==c+a) printf("YES\n");
        else printf("NO\n");
    }
}