#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#if 0
/*
 ��ӡ100-200֮�������
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
��ӡ1000-2000���������
1.�����ܱ�4�������Ҳ��ܱ�100����
2.�ܱ�400������Ҳ������
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
	printf("�ܹ���%d", flg);
	return 0;
}
#endif



#if 0
/*
�������������Լ��
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
	printf("���Լ����%d\n", n);
	return 0;
}
#endif



#if 0
/*
��ӡ1-100��3�ı���
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
��ҵд���뽫�������Ӵ�С���
*/

int main()
{
	int num = 0, num1 = 0,num2 = 0, mm = 0;
	printf("��������������");
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
��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
��ֻ���������������룬���������ȷ����ʾ������ȷ������������������������˳�����
*/
int main()
{
	int i = 0;
	char password[10] = { 0 };
	char ypassword[10] = { 0 };
	printf("�������ʼ���룺");
	scanf("%s", &ypassword);
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &password);
		if (strcmp(password, ypassword) == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯����strcmp
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
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
		Sleep(1000);//��Ϣһ����
		//system("cls");//ִ��ϵͳ�����һ��������cls������������
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
��һ�������в���һ����
*/
#if 0
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int mm;
	printf("������һ������");
	scanf("%d", &mm);
	int b = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<b; i++)
	{
		if (arr[i] == mm)
		{
			printf("�±꣺%d\n", i);
		}
	}

	return 0;
}
#endif

/*
��1-10�Ľ׳˵ĺ�
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
	printf("�ͣ�%d\n",n);
	return 0;
}
#endif



/*
��n�Ľ׳�
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