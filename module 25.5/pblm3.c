#include<stdio.h>
#include<string.h>
#include<math.h>
int cost(int n,char st[n]);
int main()
{
    int i,n;
    printf("Input the size of srting:");
    scanf("%d",&n);
    char st[n];
    scanf("%s",&st);
   int k=cost(n,st);
   int m=log(k)/log(2);
   if(pow(2,m)==k) printf("YES\ncost=2^%d",m);
   else printf("NO");
}// the program is right ,,run this in online compiler
int cost(int n,char st[n])
{
    int count=0;
    for(int i=0;i<n;i++)
    count+=st[i] -'a'+1;
    return count;
}