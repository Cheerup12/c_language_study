/*
for循环
1.不可在for循环体内修改循环变量，防止for循环失去控制。
2.建议for语句的循环控制变量的取值采用前闭后开区间写法。
3.for循环的初始化、调整、判断都可以省略.
但是：for循环的判断部分，如果被省略，那判断条件就是：横为真（死循环）。
注：for循环里面可以省略，但不要随便省略，以免出现问题。
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
int main(void)
{
	int i = 0, k = 0;
	for(i=0,k=0;k=0;i++,k++)//k=0不是判断语句，结果为假，所以不执行循环语句。
		printf("hello\n");
	return 0;
}

//int main(void)
//{
//	for (int x = 0, y = 0; x < 5 || y < 7; x++, y++)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0, j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hello\n");
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	for (;;)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////int main(void)
//{
//	for (int mm = 0; mm <= 10; mm++)
//	{
//		if (mm == 5)
//			continue;//跳过本次循环，不执行后面代码
//		printf("%d\n", mm);
//		Sleep(600);
//	}
//	return 0;
//}
//int main(void)
//{
//	for (int mm = 0; mm <=10; mm++)
//	{
//		if (mm == 5)
//			break;//结束循环，直接退出循环语句
//		printf("%d:",mm);
//		printf("property\n");
//		Sleep(600);
//	}
//	return 0;
//}