#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int mm = 0;
	while ((mm = getchar()) != EOF)
	{
		if (mm < '0' || mm>'9')
			continue;
		putchar(mm);
	}
	return 0;
}
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	getchar();//��ջ�����
//	//while ((ch = getchar()) != '\n');//��ջ�����
//	printf("��ȷ�ϣ�Y/N��");
//	ret = getchar();
//	
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else if (ret == 'N')
//	{
//		printf("����ȷ��\n");
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	return 0;
	//int ch = 0;
	//����ctrl+Z��ʾ��������
	// EOF���ļ�������־��end of file��������ֵ��-1
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//int ch = getchar();//getchar�ǴӼ����϶�ȡ�ַ�����
	//putchar(ch);//putchar������ַ�����
	//printf("\n");
	//printf("%c", ch);

//}


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