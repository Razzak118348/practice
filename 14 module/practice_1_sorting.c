#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ary[n];
    for (i = 0; i<n; i++)
    {
        scanf("%d",&ary[i]);
    }
    for (int i = 0; i < n ; i++)
    {

        for (int k = 0; k < n - 1; k++)
        {
            if (ary[k] > ary[k + 1])
            {
                int temp = ary[k];
                ary[k] = ary[k + 1];
                ary[k + 1] = temp;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", ary[j]);
    }
}