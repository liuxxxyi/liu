#include <stdio.h>
#include <stdlib.h>
/**
  ���Ƶ�ת������ת��Ϊn�������ʱ��C����ֻ��ʮ���ƣ��ˣ�ʮ�����ƣ��ʲ����ٽ���ת��ʱ������������
  ֻ���ڽ���ת��ʱ������λ������������У�Ȼ��������飻
  ���о��ǽ���ת��ʱ���ǵ�0 �� ����while��sum�� ��sumΪ��ʱ ������ѭ����������û�����ݣ�������do while;
**/
int main()
{
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    int z[31],num = 0;
    int sum = a + b;
    while(sum){
        z[num++] = sum % d;
        sum /= d;
    }//while(sum != 0);
    for(int i = num-1; i >= 0; i--)
    printf("%d",z[i]);
    printf("\n");
    return 0;
}
