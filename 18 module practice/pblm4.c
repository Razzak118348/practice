#include<stdio.h>
int main()
{
    int i,n;
    // scanf("%d",&n);
    char st[20];
    gets(st);
    printf("%c",st[0]);
    for(i=1;st[i]!='\0';i++)
    {
        if(st[i]==st[i-1]) 
        continue;
        else 
        printf("%c",st[i]);
    }
}