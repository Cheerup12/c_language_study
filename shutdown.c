#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char mm[20] = { 0 };
	system("shutdown -s -t 60");//60���ػ�
again:
	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���");
	printf("������룺��������ȡ���ػ���\n������:>");
	scanf("%s", &mm);
	if (strcmp(mm, "������") == 0)
	{
		system("shutdown -a");//ȡ���ػ�����
	}
	else
	{
		goto again;
	}
	return 0;
}