/*
��ӡ��1-100����������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	for (int i = 1; 100 >= i; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
}


