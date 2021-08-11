#include <stdio.h>
/*
先输入  n ; 在创建一个n维数组 ；


*/
int main()
{
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n <= 10)
            break;
    }
    long ar[n][3];
    for(i = 0; i < n; i++)
    {
        scanf("%ld %ld %ld",&ar[i][0],&ar[i][1],&ar[i][2]);
    }
    for(i = 0; i < n; i++)
    {
        if(ar[i][0]+ar[i][1] > ar[i][2])
        printf("Case #%d: true\n",i+1);
    else
        printf("Case #%d: false\n",i+1);
    }

    return 0;
}
