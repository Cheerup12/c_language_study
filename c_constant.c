/*
������ʹ�ó�����ʾԲ���ʦУ�������뾶Ϊ2��Բ�������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define PI 3.14
//#define PI 314e-2//314*10^-2=3.14
int main(void)
{
    const float PI = 3.14;
    float radius = 2.0;
    float area = PI * radius * radius;

    printf("�뾶Ϊ%.2f��Բ�������%.2f", radius, area);
	return 0;
}