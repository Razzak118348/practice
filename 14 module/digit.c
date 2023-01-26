#include<stdio.h>
int main()
{
    int i,dig,num;
    scanf("%d",&num);
    int sum=0;
    while(num>0)
    {
        dig = num%10;
        num = num/10;
        sum = sum+dig;
    }
    printf("%d",sum);

}
