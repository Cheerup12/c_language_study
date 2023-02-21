#define _CRT_SECURE_NO_WARNINGS
/* memset example */
#include <stdio.h>
#include <string.h>

#if 0
/* memset example */
int main()
{
	char str[] = "almost every programmer should know memset!";
	
	int mm = sizeof(str);
	memset(str, '1', mm-1);
	printf("%d\n", mm);
	puts(str);
	return 0;
}
#endif
//
//void Swap(int* x, int* y)
//{
//	int tep = 0;
//	tep = *x;
//	*x = *y;
//	*y = tep;
//}
#if 0
void Swap(int x, int y)
{
	int tep = 0;
	tep = x;
	x = y;
	y = tep;
	printf("x=%d,y=%d\n", x, y);
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	Swap(a, b);
	/*Swap(a, b);*/
	printf("a=%d,b=%d\n", a, b);

	return 0;
}
#endif

int juege_prime_number(int a);

int main()
{
	int input = 0;
	scanf("%d", &input);
	if (juege_prime_number(input) == 0)
	{
		printf("%d:是素数\n", input);
	}
	else
	{
		printf("%d:不是素数\n", input);
	}
	return 0;
}

int juege_prime_number(int a)
{
	if (a == 2)
	{
		return 0;
	}
	else if (a < 2)
	{
		return 1;
	}
	else
	{
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				return 1;
			}
			return 0;
		}

	}
}