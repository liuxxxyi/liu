#include <stdio.h>
#include <stdlib.h>
/**

三步
1，分别求各位数
2，根据给定数 求pa pb
3，求pa pb和
1,2 在一个函数同时求 pa = 0； pa = pa*10+m；
*/
int main()
{
    long A,B;
    int a,b,pa,pb;
    scanf("%ld %d %ld %d",&A,&a,&B,&b);
    pa = fuc(A,a);
    pb = fuc(B,b);
    printf("%d\n",pa+pb);
    return 0;
}

int fuc(int n,int m)
{
    int p = 0;
     while(n)
     {
         if(n%10 == m)
            p = p*10+m;
        n /= 10;
     }
     return p;
}
