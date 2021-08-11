#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
由于n为一千位之内的数，所以用字符串存储，
第一次用long long 所以有一处错误

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
