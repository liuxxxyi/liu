#include <stdio.h>
#include <stdlib.h>
/**
�������������ݣ�������һ�������������±�û���ýṹ�塣
��schoolID��school�����±ꣻ
�ô��޷����school[k] = max;

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
    for(int i = 1; i <= n; i++) //��i���㿪ʼʱ����
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

