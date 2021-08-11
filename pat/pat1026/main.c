#include <stdio.h>
#include <stdlib.h>
/**
四舍五入用  if(n%100 >= 50)   n = n/100+1;
            else              n = n/100;

若先 n/100  不管后两位为什么都已丢弃 后面的n已经丢失精度；
**/
int main()
{
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    int ans = c2 - c1;
    printf("%d,%d\n",ans,ans/100);
    if(ans%100 >= 50)
        ans =  ans/100 + 1;
    else
         ans /= 100;
    printf("%d\n",ans);
    printf("%d:%d:%d\n",ans/3600,ans%3600/60,ans%3600%60);
    return 0;
}
