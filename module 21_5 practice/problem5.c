#include<stdio.h>
int  hmm(char k,int m,int n )
{
  if(k='*')
  return m*n;
  else if(k='-')
  {
    if(m>n)
    {
        return (m-n);
    }
    else
    return n-m;
  }
  else if(k='+')
  return m+n;
  else 
  {
     if(m>n)
     {
        return m/n;
     }
     else
     {
        return n/m;
     }
  }
}
int main()
{
    int a,b;
    char ch;
    ch=getchar();
    getchar();
    scanf("%d %d",&a,&b);
    int s=hmm(ch,a,b);
    printf("%d",s);
}