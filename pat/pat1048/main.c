#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
�ַ��������ȵ����ַ���
Ȼ����
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
    char a[110],b[110],ans[110] = {0};   //ans�����ֵ��ȫ����Ļ�reserve������
    int len,lena,lenb;
    scanf("%s%s",a,b);
    reserve(a);
    reserve(b);
    lena = strlen(a);
    lenb = strlen(b);
    len = lena > lenb ? lena : lenb;  //����չʾ�����ӣ����λ���λ��ͬ

    for(int i = 0; i < len; i++)
    {
        int numa = i < lena ? a[i] - '0' : 0;  //��i  ��ǰ���ַ���λ��С�ڱ��ַ���λ��ʱ����iλ���ڱ��ַ���λ��ʱ��  ��һ��ʹ���� i < len
        int numb = i < lenb ? b[i] - '0' : 0;  // �������� ��Ϊ��
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
