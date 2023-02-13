#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char smm1[] = "              welcome to bit!!!!!!              ";
	char smm2[] = "              ####################              ";
	char smm3[] = "                                                ";
	strcpy(smm3, smm2);
	int left = 13;
	//int right= sizeof(smm1) / sizeof(smm1[0])-2;
	int right = strlen(smm1) - 14;
	for (int i = 0; i <= right; i++)
	{
		smm2[left] = smm1[left];
		smm2[right] = smm1[right];
		printf("%s\n", smm2);
		Sleep(1000);//休息一秒钟
		//system("cls");//执行系统命令的一个函数，cls是清屏的命令
		left++;
		right--;
		if (strcmp(smm2,smm1)==0)
		{
			break;
		}
	}
	//printf("%s\n", smm3);
	for (int i = 0; i <= right; i++)
	{
		smm1[left] = smm3[left];
		smm1[right] = smm3[right];
		printf("%s\n", smm1);
		Sleep(1000);
		left++;
		right--;
		if (strcmp(smm1, smm3) == 0)
		{
			break;
		}
	}
	return 0;
}





/*
在一个数组中查找一个数
*/
#if 0
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int mm;
	printf("请输入一个数：");
	scanf("%d", &mm);
	int b = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<b; i++)
	{
		if (arr[i] == mm)
		{
			printf("下标：%d\n", i);
		}
	}

	return 0;
}
#endif

/*
求1-10的阶乘的和
*/
#if 0
int main()
{
	int  mm = 1,n=0;
	for (int i = 1; i <= 10; i++)
	{
		mm = mm * i;
		printf("mm:%d\n", mm);
		n = n + mm;
	}
	printf("和：%d\n",n);
	return 0;
}
#endif



/*
求n的阶乘
*/
#if 0
int main()
{
	int n;
	int mm=1;
	printf("input:");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("output:%d", mm);
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{	
			mm =mm* i;	
		}
		printf("output:%d\n", mm);
	}
	return 0;
}
#endif