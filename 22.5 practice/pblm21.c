#include<stdio.h>
void pattern(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
   
    pattern(n);
}
void pattern(int n)
{  int x=0;
    for(int i=1;i<=n;i++)
    {
        x+=i;
    }
    int ary[x];
    for(int i=0;i<x;i++) ary[i]=0;

    int m=0;
     for(int i=2;i<=(n*n*n);i++)
    {    int k=0;
          int y=i;
        for(int j=2;j<y/2;i++)
        {
           
          if(y%j==0){ 
            k=1;
            break;}

            else k=0;
            
        } 
        if(k==0)
        ary[m]=y;

         if(m>=x) break;
         m++;   

    }
    for(int l=0;l<x;l++){
   printf("%d ",ary[l]);}
}
