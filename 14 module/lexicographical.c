#include<stdio.h>
#include<string.h>
int main()
{
   char a[110],s[110];
   gets(a);
   gets(s);
   int len = strlen(s); 
    for(int i=0;i<len;i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i] +=32;
        }
        if(s[i]>='A'&& s[i]<='Z')
        {
            s[i] +=32;
        }
    }
    int value=1;
    for( int i=0;i<len;i++)
    {
        if(a[i]>s[i])
        {
            printf("Not lexicographical\n");
            value=0;
            break;
        }
        else if(a[i]<s[i])
        {
            printf("Not lexicographical\n");
            value=0;
           break;
        }
    }
    if(value==1)
    printf("lexicographical\n");
    return 0;
}   