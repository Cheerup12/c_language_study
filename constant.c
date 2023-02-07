/*
常量：使用常量表示圆周率π，并计算半径为2的圆的面积。
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

    printf("半径为%.2f的圆，面积是%.2f", radius, area);
	return 0;
}