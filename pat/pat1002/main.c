#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

���������ַ����������ݣ� �����˼����ַ��������� gets������ sprintf������
�� assic�� sum = �� - ��0����
sum = �� - 48��


*/
int main()
{
    int sum = 0;
    char strsum[4];
    char str[101];
    char strping[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    gets(str);

    for(int i = 0; i < strlen(str); i++)
        sum += (str[i] - '0');
    sprintf(strsum,"%d",sum);

    for(int i = 0; i < strlen(strsum); i++)
    {
       int n = strsum[i] - 48;
       printf("%s",strping[n]);
       if(i != strlen(strsum) - 1)
        printf(" ");
       else
        ;
    }
    return 0;
}

