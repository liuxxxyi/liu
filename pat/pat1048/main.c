#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
字符串处理，先倒置字符串
然后处理；
**/
void reserve(char s[])
{
    int len = strlen(s);
    for(int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}
int main()
{
    char a[110],b[110],ans[110] = {0};   //ans数组初值不全置零的话reserve后会出错
    int len,lena,lenb;
    scanf("%s%s",a,b);
    reserve(a);
    reserve(b);
    lena = strlen(a);
    lenb = strlen(b);
    len = lena > lenb ? lena : lenb;  //根据展示的例子，输出位与高位相同

    for(int i = 0; i < len; i++)
    {
        int numa = i < lena ? a[i] - '0' : 0;  //当i  当前的字符串位置小于本字符串位数时，与i位大于本字符串位数时；  第一次使用了 i < len
        int numb = i < lenb ? b[i] - '0' : 0;  // 此条件下 恒为假
        if(i % 2 == 0)
        {
            int x =(numa + numb) % 13;
            if(x == 10) ans[i] = 'J';
            else if(x == 11) ans[i] = 'Q';
            else if(x == 12) ans[i] = 'K';
            else ans[i] = x + '0';
        }
        else
        {
            int x = numb - numa;
            if(x < 0)  ans[i] = x + 10 + '0';
            else       ans[i] = x + '0';

        }
    }
    reserve(ans);
   for(int i = 0; i < strlen(ans); i++)
    printf("%c",ans[i]);
    return 0;
}
