#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
��ӡ�˷��ھ���
*/
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d  ", i, j, (i * j));
		}
		printf("\n");
	}
	return 0;
}
