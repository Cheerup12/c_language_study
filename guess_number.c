#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void header(void);
void game(void);

int main()
{
	srand((unsigned int)time(NULL));//��ʱ���������һ���䶯�������
	while (1)
	{

		int opt=0;
		int input = 0;
		header();
		printf("������:>");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			game();//��������Ϸ����
			continue;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
		}
		break;
	}
	return 0;
}
void header(void)
{
	printf("*********************************************\n");
	printf("    1.����Ϸ                 2.�˳���Ϸ      \n");
}

void game(void)
{
	int ret = 0;//���������
	int guess = 0;//���ռ��������������
	//��rand()��������һ���������
	ret = rand() % 1000 + 1;//����һ��1-1000�������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("���С����\n");
		}
		else if(guess > ret)
		{
			printf("��´�����\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}