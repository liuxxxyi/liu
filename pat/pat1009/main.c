#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
�����ַ������⣬�洢�����飬��char * һ�㷢���ڴ�����������ޣ������뺯��scanf �� gets
����' ' �� '\0' ���ж�

**/
int main()
{
    char str[90];
    gets(str);
    int len = strlen(str);

    char ans[20][20];
    int r = 0,l = 0;

    for(int i = 0; i < len; i++)
    {
        if(str[i] != ' ')
        {
            ans[r][l++] = str[i];
        }
        else
        {
            ans[r][l] = '\0';
            r++;
            l = 0;
        }
    }

    for(int i = r ; i >= 0; i-- ) // ���û�пո����� i=r ��ʼ
    {
        printf("%s",ans[i]);
        if(i != 0)
            printf(" ");
    }
    //printf("Hello world!\n");
    return 0;
}

