#include <stdio.h>
#include <stdlib.h>
// 部分正确 一处未过
int main()
{
    int  n,i,j;
    scanf("%d",&n);
    int mod,count = 0,div = 1;
    int array[10];
    while(div)
    {
        mod = n%10;
        div = n/10;
        n = div;

        array[count] = mod;
        count++;

    }
    for(i = 0; i < 10; i++)
    {
        int count1 = 0;
        for(j = 0; j < count; j++)
        {
            if(i == array[j])
                count1++;

        }
        if(count1 != 0)
            printf("%d:%d\n",i,count1);

    }
    return 0;
}
