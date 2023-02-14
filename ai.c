#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 5
int main()
{
	int arr[N]={0};
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N-1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			max = arr[i + 1];
		}
		else
		{
			arr[i + 1] = arr[i];
			max = arr[i];
		}
	}
	printf("%d\n", max);
	
	return 0;
}