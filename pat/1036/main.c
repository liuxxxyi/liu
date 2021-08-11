#include <stdio.h>
#include <stdlib.h>
/**
简单的输出图形，注意重复的行用两重循环解决

**/
int main()
{
    int row,clo;
    char c;

    scanf("%d %c",&clo,&c);

    if(clo%2 == 0)
        row = clo/2;
    else
        row = clo/2+1;
    //printf("%d %d %c",clo,row,c);
    for(int i = 0; i < clo; i++)
    {
        printf("%c",c);
    }
    printf("\n");

    for(int i = 0; i < row - 2; i++)
    {
        for(int j = 0; j < clo; j++)
        {
            if(j == 0 ||  j == clo - 1)
                printf("%c",c);

            else
                printf(" ");

        }
        printf("\n");

    }

    for(int i = 0; i < clo; i++)
    {
        printf("%c",c);
    }

    return 0;
}
