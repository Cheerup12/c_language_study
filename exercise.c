#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#if 0
/*
 打印100-200之间的素数
*/
int main()
{
	int num = 0,i=0,flg=0;
	for (num = 100; num <= 200; num++)
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				break;
			}
		}
		if (i == num)
		{
			flg++;
			printf("%d ", num);
		}
	}
	printf("\n%d ", flg);
	return 0;
}
#endif



#if 0
/*
打印1000-2000这件的闰年
1.闰年能被4整除，且不能被100整除
2.能被400整除的也是闰年
*/
int main()
{
	int flg = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (((i % 4) == 0)&&((i%100)!=0))
		{
			flg++;
			printf("%d ", i);
		}
		else if(i % 400 == 0)
		{
			flg++;
			printf("%d ", i);
			
		}
	}
	printf("总共：%d", flg);
	return 0;
}
#endif



#if 0
/*
求两个数的最大公约数
*/
int main()
{
	int m, n;
	int r=0;
	scanf("%d%d", &m, &n);

	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("最大公约数：%d\n", n);
	return 0;
}
#endif



#if 0
/*
打印1-100内3的倍数
*/
int main()
{
	for (int i = 1; i < 100; i++)
	{
		if ((i % 3) == 0)
			printf("%d ", i);
	}
	return 0;
}

#endif



#if 0
/*
作业写代码将三个数从大到小输出
*/

int main()
{
	int num = 0, num1 = 0,num2 = 0, mm = 0;
	printf("请输入三个数：");
	scanf("%d%d%d", &num, &num1, &num2);
	if (num < num1)
	{
		mm = num;
		num = num1;
		num1 = mm;
	}
	if (num < num2)
	{
		mm = num;
		num = num2;
		num2 = mm;
	}
	if (num1 < num2)
	{
		mm = num1;
		num1 = num2;
		num2 = mm;
	}
	printf("%d %d %d\n",num,num1,num2);
	return 0;
}
#endif
#if 0
/*
编写代码实现，模拟用户登录情景，并且只能登录三次。
（只允许输入三次密码，如果密码正确则提示密码正确，如果三次输入均输入错误，则退出程序）
*/
int main()
{
	int i = 0;
	char password[10] = { 0 };
	char ypassword[10] = { 0 };
	printf("请输入初始密码：");
	scanf("%s", &ypassword);
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &password);
		if (strcmp(password, ypassword) == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数—strcmp
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}
#endif 

#if 0
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

#endif



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