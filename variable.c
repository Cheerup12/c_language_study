/*

变量：使用while循环修改变量值，依次打印10以内(包含10)所有正整数的平方
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num = 1;
    int max_num = 10;
    int step = 1;
    int result = 0;
    while (num <= max_num)
    {
        result = num * num;
        printf("%d ^ 2 = %d\n", num, result);
        num = num + step;
    }
	return 0;
}