#include <stdio.h>
#include <stdlib.h>
/**
һ������A�д���N��>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ��������M����0����λ�ã�����A�е������ɣ�A

�������M����ѭ��������ǰ���M��λ�ã��������Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����

��ʹ�������ƶ��Ḳ��һЩ���ݣ�
**/
int main()
{
    int n,m,count = 0;
    scanf("%d%d",&n,&m);
    m = m%n;                          //��Ŀû˵ m > n; ��m%n��
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
