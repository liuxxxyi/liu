#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , a ,aa, b, bb, suma = 0, sumb = 0;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d",&a,&aa,&b,&bb);
        if(aa == a + b && aa != bb)
            sumb++;
        else if(bb == a + b && aa != bb)
            suma++;
        else ;
    }
    printf("%d %d\n",suma,sumb);
    return 0;
}
