#include <stdio.h>
#include <stdlib.h>
/**
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置，即将A中的数据由（A

）（最后M个数循环移至最前面的M个位置）。如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

不使用数组移动会覆盖一些数据；
**/
int main()
{
    int n,m,count = 0;
    scanf("%d%d",&n,&m);
    m = m%n;                          //题目没说 m > n; 用m%n；
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d",&a[i]);

    for(int i = n -m; i < n ; i++)
    {
        printf("%d",a[i]);
        if(count < n-1)             //count != n-1
            printf(" ");
        count++;
    }
    printf("%d\n",count);
    for(int i = 0; i < n-m; i++ )
    {
        printf("%d",a[i]);
        if(count < n-1)
            printf(" ");
        count++;
    }
    printf("%d\n",count);
    return 0;
}
