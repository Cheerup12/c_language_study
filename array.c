/*
  ���飺��һ����ͬԪ�صļ��ϣ�
  ���鴴����[]��Ҫ��һ���������У�����ʹ�ñ�����
  ����ĳ�ʼ���������鴴��ʱ��ÿ�������������ĳ�ʼֵ����ʼ������
  ��ά�����кſ���ʡ�ԣ��кŲ�����ʡ�ԣ�
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
//	printf("%d\n", sizeof(array4));//��\0
//	printf("%d\n", strlen(array4));//����\0
//	puts(array1);
//	puts(array);
//	return 0;
//}
//

//ð������

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


//һ�����������������������׵�ַ;
//sizeof(������)-��������ʾ�������飬����Ľ������������Ĵ�С����λ���ֽڲ���bitλ��
//&�������������������������飬ȡ������������ĵ�ַ��