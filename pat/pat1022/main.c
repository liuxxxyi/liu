#include <stdio.h>
#include <stdlib.h>
/**
  进制的转换，当转换为n进制输出时，C语言只有十进制，八，十六进制，故不能再进制转换时加完求和输出，
  只能在进制转换时，将各位数存放在数组中，然后输出数组；
  还有就是进制转换时考虑到0 ： 若用while（sum） 当sum为零时 不进入循环，故数组没有数据，所以用do while;
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
