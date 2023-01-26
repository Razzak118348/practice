#include<stdio.h>
int main()
{
   
    int i ,j ,k;
    scanf("%d%d%d",&i,&j,&k);
   int* a=&i;*a=i;
    int* b=&j;*b=j;
    int* c=&k;*c=k;
    printf("%d",(*a+*b+*c));
}