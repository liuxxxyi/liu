#include <stdio.h>
#include <stdlib.h>
/**
��Ŀ����shiji�����������ڽṹ����ֻ����������������һ�����飬
��������������shijiֵ������������


**/
struct student
{
 long long num;
  int kaoshi;
}stu[1000];
int main()
{
    int n,shiji,kaoshi;

    long long num;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld%d%d",&num,&shiji,&kaoshi);
        stu[shiji].num = num;
        stu[shiji].kaoshi = kaoshi;

    }

    int m;
    scanf("%d",&m);
    //int b[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d",&shiji);
        printf("%lld %d\n",stu[shiji].num,stu[shiji].kaoshi);
    }


    return 0;
}

