#include <stdio.h>
#include <stdlib.h>
/**

����
1���ֱ����λ��
2�����ݸ����� ��pa pb
3����pa pb��
1,2 ��һ������ͬʱ�� pa = 0�� pa = pa*10+m��
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
