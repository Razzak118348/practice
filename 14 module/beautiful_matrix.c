#include<stdio.h>
int main()
{
    int i,j,k,h=0,m;
    int a[5][5];
     for( i=0;i<5;i++)
    {
        for( j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
             if(a[i][j]==1)
            {
                k=i;
                m=j;
               
            }
        }
    }
    int z,w;
    if(k>2)
        w=(k-2);
    else 
      w=(2-k);
    if(m>2)
        z=(m-2);
    else 
       z=(2-m);

    h=w+z;
    printf("%d\n",h);


}