/*
  数组：是一组相同元素的集合；
  数组创建，[]中要给一个常量才行，不能使用变量；
  数组的初始化：在数组创建时给每个数组给出合理的初始值（初始化）；
  二维数组行号可以省略，列号不可以省略；
*/

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>

//int main()
//{
//	int array[5] = { 0,2,3, };
//	char array1[5] = { 'a','b','c' };
//	char array2[5] = "ab";
//	char array4[] = "abcdef";
//	printf("%d\n", sizeof(array4));//算\0
//	printf("%d\n", strlen(array4));//不算\0
//	puts(array1);
//	puts(array);
//	return 0;
//}
//

//冒泡排序

void bubble_sort(int array[], int n)
{
	int i = 0;
	int j = 0;
	int TS = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i; j++)
		{
			if (array[j] > array[j + 1])
			{
				TS = array[j];
				array[j] = array[j + 1];
				array[j + 1] = TS;
				count = 1;
			}
		}
		if (count == 0)
		{
			break;
		}
	}
}

int main()
{
	int n = 0;
	int smm[] = { 9,8,7,6,5,4,3,2,1,0 };
	int* p = smm;
	n = sizeof(smm) / sizeof(smm[0])-1;
	bubble_sort(smm,n);
	for (int i = 0; i <= n; i++)
	{
		printf("%d ", smm[i]);
	}
	return 0;
}


//一般情况下数组名就是数组的首地址;
//sizeof(数组名)-数组名表示整个数组，计算的结果是整个数组的大小，单位是字节不是bit位；
//&数组名，数组名代表整个数组，取出的是整数组的地址；