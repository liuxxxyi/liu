#include <stdio.h>
#include <stdlib.h>
/**
尽管有两个数据，但是用一个数据做数组下表，没有用结构体。
用schoolID做school数组下标；
用打擂法算出school[k] = max;

**/
int school[100000] = {0};
int main()
{
    int n,score,schId;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d%d",&schId,&score);
        school[schId] += score;
    }

   /* for(int i = 1; i <= n; i++)
        printf("%d %d\n",i,school[i]);
    */
    int k,max = school[1];
    for(int i = 1; i <= n; i++) //当i从零开始时错误
    {
        if(school[i] > max)
            {
                max = school[i];
                k = i;
            }
    }
    printf("%d %d\n",k,school[k]);
    return 0;
}

