#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	//����ctrl+Z��ʾ��������
	// EOF���ļ�������־��end of file��������ֵ��-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//int ch = getchar();//getchar�ǴӼ����϶�ȡ�ַ�����
	//putchar(ch);//putchar������ַ�����
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
//			continue;//��������ѭ�����������䲻��ӡ�����ؿ�ʼִ���´�ѭ��
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
//			break;//ֱ���˳���ѭ�����
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}