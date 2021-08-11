#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reserve(char s[],int len)      //现将两字符串的小写换成大写
{
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
}
int main()
{
    char str1[100],str2[100];
    scanf("%s%s",str1,str2);
    int hashtable[130] = {0};
    int len1,len2;
    len1 = strlen(str1);
    len2 = strlen(str2);

    reserve(str1,len1);
    reserve(str2,len2);
    for(int i = 0; i < len1; i++)  //遍历两字符串，因为不重复输出，所以输出一次后，将hashtable相应值置1；
    {                              //然后输出条件为 j == len2 && hashtable[x] == 0;
        int j;
        char c1,c2;
        for(j = 0; j < len2; j++)
        {
            c1 = str1[i];
            c2 = str2[j];
            if(c1 == c2)
                break;
        }
        if(j == len2 && hashtable[c1] == 0)  //直接将字符作为下标；
        {
            printf("%c",c1);
            hashtable[c1] = 1;
        }
    }

    return 0;
}
