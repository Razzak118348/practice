#include<stdio.h>
int main()
{
    int x,y;
    float i;
    int* m;int*n;
    scanf("%d %d",&x,&y);
    m=&x;n=&y;
   float sum=*m+*n;
    i=(float)(sum / 2);
   float* j=&i;
    printf("%f",*j);
}