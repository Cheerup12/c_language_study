#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[7] = { 01,03,16,22,24,26,8 };
	int arr1[7] = { 02,07,11,14,26,32,15 };
	int arr2[7] = { 03,13,15,28,29,33,03 };
	int now[7];
	int i;
	for (i = 0; i < 7; i++)
		scanf("%d", &now[i]);

	printf("第一组\n");
	for (i = 0; i < 7; i++)
	{
		if (arr[i] == now[i])
			printf("%3d  ", arr[i]);
	}
	printf("\n");
	printf("第二组\n");
	for (i = 0; i < 7; i++)
	{
		if (arr1[i] == now[i])
			printf("%3d  ", arr1[i]);
	}
	printf("\n");
	printf("第三组\n");
	for (i = 0; i < 7; i++)
	{
		if (arr2[i] == now[i])
			printf("%3d  ", arr2[i]);
	}
	printf("\n");
	return 0;
}