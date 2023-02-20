#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char mm[20] = { 0 };
	system("shutdown -s -t 60");//60秒后关机
again:
	printf("请注意，你的电脑将在一分钟后关机！");
	printf("如果输入：我是猪，就取消关机。\n请输入:>");
	scanf("%s", &mm);
	if (strcmp(mm, "我是猪") == 0)
	{
		system("shutdown -a");//取消关机命令
	}
	else
	{
		goto again;
	}
	return 0;
}