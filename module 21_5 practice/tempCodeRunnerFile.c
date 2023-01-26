void pattern(n)
{
    int a=(2*n)-1;
    for(int i=0;i<n;i++)
    {   if(i>0)
      {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
      }
     for(int j=0;j<a;j++)
        {   
            printf("*");
        }
        a-=2;
    }
}
