#include<stdio.h>
#include<string.h>
int chack(char st[100]);
int main()
{
    
    char st[100];
    gets(st);
    int  x=chack(st);
    if(x>=1)
    printf("YES");
    else
    printf("NO");
}
int chack(char st[100])
{   int x=1;
   //fg
    int  st_ln=strlen(st);
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]=='0'|| st[i]=='1')
        {
            x++;
        }
        else
        return 0;
    }
    return x;
}