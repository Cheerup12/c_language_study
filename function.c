#define _CRT_SECURE_NO_WARNINGS
/* memset example */
//#include <stdio.h>
//#include <string.h>
//#include <math.h>

#if 0
/* memset example */
int main()
{
	char str[] = "almost every programmer should know memset!";
	
	int mm = sizeof(str);
	memset(str, '1', mm-1);
	printf("%d\n", mm);
	puts(str);
	return 0;
}
#endif
//
//void Swap(int* x, int* y)
//{
//	int tep = 0;
//	tep = *x;
//	*x = *y;
//	*y = tep;
//}
#if 0
void Swap(int x, int y)
{
	int tep = 0;
	tep = x;
	x = y;
	y = tep;
	printf("x=%d,y=%d\n", x, y);
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	Swap(a, b);
	/*Swap(a, b);*/
	printf("a=%d,b=%d\n", a, b);

	return 0;
}
#endif

//int juege_prime_number(int a);
//
//int main()
//{
//    while (1)
//    {
//        int input = 0;
//        printf("请输入一个整数：");
//        scanf("%d", &input);
//        if (juege_prime_number(input) == 0)
//        {
//            printf("%d是素数\n", input);
//        }
//        else
//        {
//            printf("%d不是素数\n", input);
//        }
//        
//    }
//    return 0;
//}
//
//int juege_prime_number(int a)
//{
//    if (a == 2)
//    {
//        return 0;
//    }
//    else if (a < 2 || a % 2 == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        int i;
//        int max_divisor = sqrt(a);
//        for (i = 3; i <= max_divisor; i += 2)
//        {
//            if (a % i == 0)
//            {
//                return 1;
//            }
//        }
//        return 0;
//    }
//}

//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n);
//
//int main() 
//{
//    int n;
//    printf("请输入一个整数：");
//    scanf("%d", &n);
//    if (is_prime(n)) 
//    {
//        printf("%d 是素数。\n", n);
//    }
//    else 
//    {
//        printf("%d 不是素数。\n", n);
//    }
//    return 0;
//}
//
//int is_prime(int n) 
//{
//    if (n < 2) 
//    {
//        return 0;
//    }
//    int i;
//    int max_divisor = sqrt(n);
//    //printf("%d\n", max_divisor);
//    for (i = 2; i <= max_divisor; i++) 
//    {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}

#if 0
#include <stdio.h>

int binary_search(int arr[], int left, int right, int n);

int main()
{
    int smm[] = { 1,2,3,4,5,6,7,8,9,10 };
    int input = 0;
    int ret = 0;
    printf("请输入查找的数值：");
    scanf("%d", &input);
    int right = sizeof(smm) / sizeof(smm[0]) - 1;
    ret = binary_search(smm, 0, right, input);
    if (ret == -1)
    {
        printf("没有找到\n");
    }
    else
    {
        printf("下标是：%d\n", ret);
    }
    return 0;
}

int binary_search(int arr[], int left, int right, int n)
{
    while (left <= right) // 当区间不为空时循环
    {
        int mid = (left + right) / 2; // 中间位置
        if (n == arr[mid])
        {
            return mid;
        }
        else if (n < arr[mid])
        {
            right = mid - 1; // 在左半边继续查找
        }
        else
        {
            left = mid + 1; // 在右半边继续查找
        }
    }
    return -1; // 没有找到
}
#endif
#include <stdio.h>

void add(int* x);

int main()
{
    int num = 0;
    add(&num);
    printf("%d\n", num);
    return 0;
}

void add(int* x)
{
    (* x)++;
}