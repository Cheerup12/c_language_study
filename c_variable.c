/*

������ʹ��whileѭ���޸ı���ֵ�����δ�ӡ10����(����10)������������ƽ��
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