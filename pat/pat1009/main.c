#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
处理字符串的题，存储用数组，用char * 一般发生内存错误（能力有限），输入函数scanf 与 gets
利用' ' 与 '\0' 做判断

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

    for(int i = r ; i >= 0; i-- ) // 最后没有空格所以 i=r 开始
    {
        printf("%s",ans[i]);
        if(i != 0)
            printf(" ");
    }
    //printf("Hello world!\n");
    return 0;
}

