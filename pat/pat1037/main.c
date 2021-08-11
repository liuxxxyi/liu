#include <stdio.h>
#include <stdlib.h>
/**
进制转换，类似于时间的“小时分钟秒” 的转换 先将朴准值转换为最小单位的值，然后再根据 模余运算求各单位下的对应值；
n / 3600 , n % 3600 , n / 60;
n / g , n % g / s , n / s;
**/
int main()
{
    int g1,s1,k1,g2,s2,k2;
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
    int sum1 = 29*17*g1 + 29*s1+ k1, sum2 = 29*17*g2 + 29*s2 + k2;
    int cha = sum2 - sum1;

    if(cha < 0)
    {
        printf("-");
       cha = -cha;
    }


    printf("%d.%d.%d",cha/(29*17),cha%(29*17)/29,cha%29);
    return 0;
}
