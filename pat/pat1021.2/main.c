#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
����nΪһǧλ֮�ڵ������������ַ����洢��
��һ����long long ������һ������

**/
char str[1000];
int main()
{
    gets(str);
    char *p = &str[0];
    int count[10] = {0};

    for(int i = 0; i < strlen(str); i++)
    {
        int n = (*p) - '0';
        count[n]++;
        p++;
    }
    for(int i = 0; i < 10; i++ )
        if(count[i])
        printf("%d:%d\n",i,count[i]);
    return 0;
}
