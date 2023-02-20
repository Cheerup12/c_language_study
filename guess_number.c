#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void header(void);
void game(void);

int main()
{
	srand((unsigned int)time(NULL));//用时间戳来生成一个变动的随机数
	while (1)
	{

		int opt=0;
		int input = 0;
		header();
		printf("                              请输入(1-2):>");
		scanf("%d", &opt);
		printf("\n");
		switch (opt)
		{
		case 1:
			game();//猜数字游戏函数
			continue;
		case 2:
			printf("                              退出游戏\n");
			break;
		default:
			printf("                              输入错误,请重新输入\n");
			continue;
		}
		break;
	}
	return 0;
}
void header(void)
{
	printf("\n");
	printf("                                  猜数字游戏                            \n");
	printf("                       1.玩游戏                 2.退出游戏              \n");
	printf("\n");
}

void game(void)
{
	int ret = 0;//接收随机数
	int guess = 0;//接收键盘上输入的数字
	//用rand()函数生成一个随机数，
	ret = rand() % 1000 + 1;//生成一个1-1000的随机数
	while (1)
	{
		printf("                              请猜数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("\n");
			printf("                              你猜小啦！\n");
			printf("\n");
		}
		else if(guess > ret)
		{
			printf("\n");
			printf("                              你猜大啦！\n");
			printf("\n");
		}
		else
		{
			printf("\n");
			printf("                              恭喜你，猜对了！\n");
			printf("\n");
			break;
		}
	}
}