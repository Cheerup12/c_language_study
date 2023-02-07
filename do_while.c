#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
		{
			//break;
			continue;//会造成程序死循环
		}
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}