/*
forѭ��
1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
2.����for����ѭ�����Ʊ�����ȡֵ����ǰ�պ�����д����
3.forѭ���ĳ�ʼ�����������ж϶�����ʡ��.
���ǣ�forѭ�����жϲ��֣������ʡ�ԣ����ж��������ǣ���Ϊ�棨��ѭ������
ע��forѭ���������ʡ�ԣ�����Ҫ���ʡ�ԣ�����������⡣
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
int main(void)
{
	int i = 0, k = 0;
	for(i=0,k=0;k=0;i++,k++)//k=0�����ж���䣬���Ϊ�٣����Բ�ִ��ѭ����䡣
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
//			continue;//��������ѭ������ִ�к������
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
//			break;//����ѭ����ֱ���˳�ѭ�����
//		printf("%d:",mm);
//		printf("property\n");
//		Sleep(600);
//	}
//	return 0;
//}