#include <stdio.h>
#include <stdlib.h>
/**
hash
**/
int hashtable[100010] = {0};
int count[100010] = {0};
int main()
{
    int n,m;

    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        hashtable[x]++;
    }

    scanf("%d",&m);
    for(int i = 0,j = 0; i < m; i++,j++)
    {
        int x;
        scanf("%d",&x);
        count[i] = hashtable[x];
    }
    for(int i = 0; i < m; i++)
        {
            printf("%d",count[i]);
            if(i < m - 1)
                printf(" ");
        }
    return 0;
}
