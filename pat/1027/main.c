#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
�ҹ��� ���ͼ�Σ����˵Ȳ����У���ѧ�ķ����ҳ����ɣ�����ǰn������е�����
��������У�����n������ΪbottomҲ���ǵȲ����еĵ�n�Ȼ��Χ������һ�е�ֵ

**/
int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
   // printf("%d %c\n",n,c);
    int bottom = (int)sqrt(2*(1+n))-1;
    int use = 2*((1+bottom)/2)*((1+bottom)/2) - 1;
    if(bottom % 2 == 0)
        bottom -= 1;
    printf("%d\n",bottom);
    for(int i = bottom; i >= 1; i -= 2)
    {
        for(int j = 0; j < (bottom - i)/2; j++)
            printf(" ");
        for(int j = 0; j < i; j++)
            printf("%c",c);
        printf("\n");
    }

    for(int i = 3; i <= bottom; i += 2)
    {
        for(int j = 0; j < (bottom - i)/2; j++)
            printf(" ");
        for(int j = 0; j < i; j++)
            printf("%c",c);
        printf("\n");
    }
    printf("%d",n - use);
    return 0;
}
