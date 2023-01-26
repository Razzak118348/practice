#include<stdio.h>
void func(int x);
int main()
{
    int n;
    scanf("%d",&n);
    func(n);

}
void func(int x)
{
   if(x<0)
    {
        int a=-x;
        for(int i=x;i<=a;i++)
        {
            printf("%d ",i);
        }
    }
    else if(x>0)
    {
        int a=-x;
        for(int i=x;i>=a;i--)
        printf("%d ",i);
    }
}