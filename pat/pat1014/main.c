#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**/
int main()
{
    char week[7][10] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char str1[70] ,str2[70],str3[70],str4[70];
    gets(str1);
    gets(str2);
    gets(str3);
    gets(str4);

    int len1,len2,len3,len4;
    len1 = strlen(str1);
    len2 = strlen(str2);
    len3 = strlen(str3);
    len4 = strlen(str4);

    int i;
    for( i = 0; i < len1 && i <len2; i++)
    {
        if(str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G')
        {
            printf("%s ",week[str1[i] - 'A']);
            break;
        }

    }

    for(i++; i < len1 && i < len2; i++)
    {
        if(str1[i] == str2[i] && str1[i] >= '0' && str1[i] <= '9')
        {
            printf("%02d:",str1[i] - '0');
            break;
        }
        if(str1[i] == str2[i] && str1[i] >='A' && str1[i] <= 'N')
        {
            printf("%02d:",str1[i] - 'A' + 10);
            break;
        }
    }

    for(int i = 0; i < len3 && i < len4; i++)
    {
        if(str3[i] == str4[i] && ((str3[i] >= 'A' && str3[i] <= 'Z') || (str3[i] >= 'a' && str3[i] <= 'z')))
        {
            printf("%02d",i);
            break;
        }
    }
    printf("Hello world!\n");
    return 0;
}
