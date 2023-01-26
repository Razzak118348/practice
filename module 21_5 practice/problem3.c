#include<stdio.h>
void sum(int n,int x[n])
{   int summ=0;
   for(int i=0;i<n;i++)
   {
    int a=x[i];
    int k=a%10;
    int m=a/1000; //jehetu 4 digit number tai 1000 dara vag ;
    summ=summ+k+m;
   
   }
   printf("%d",summ);

}
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
   sum(n,num);
}