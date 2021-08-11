#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
未完全通过，减一分
**/
char str1[100010],str2[100010];
void reserve(char s[],int len)
{
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <='Z')
            s[i] =s[i] -'A' + 'a';
    }
}
int main()
{

    int len1,len2;
    scanf("%s%s",str1,str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    reserve(str1,len1);

    int hashtable[300];
    for(int i = 0; i < 300; i++)
        hashtable[i] = 1;
    for(int i = 0; i < len1; i++)
        hashtable[str1[i]] = 0;

    for(int i = 0; i < len2; i++)
    {
        if(str2[i] >= 'A' && str2[i] <= 'Z' )
        {
            int st = str2[i] - 'A' + 'a';
            if(hashtable[st] == 1 && hashtable['+'] == 1)
                printf("%c",str2[i]);
        }
        else if(hashtable[str2[i]] == 1)
            printf("%c",str2[i]);
    }
    printf("\n");
    return 0;
}
