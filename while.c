#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	//输入ctrl+Z表示结束程序
	// EOF叫文件结束标志（end of file），它的值是-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//int ch = getchar();//getchar是从键盘上读取字符函数
	//putchar(ch);//putchar是输出字符函数
	//printf("\n");
	//printf("%c", ch);
	return 0;
}


//int main()
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		if (i == 5)
//			continue;//跳过本次循环，后面的语句不打印，返回开始执行下次循环
//		printf("%d ", i);
//		i++;
//	}
//;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		if (5 == i)
//			break;//直接退出本循环语句
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}