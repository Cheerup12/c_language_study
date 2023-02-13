#define _CRT_SECURE_NO_WARNINGS

#if 1
#include <stdio.h>
int main()
{
	int  i, j, k, l, m;
	char c = 3; //ASCII码里面 3 就是一个字符小爱心
	for (i = 1; i <= 5; i++)    
		printf("\n"); //开头空出5行
	for (i = 1; i <= 3; i++) 
	{ //前3行中间有空隙分开来写
		for (j = 1; j <= 32 - 2 * i; j++)  
			printf(" "); //左边的空格，每下一行左边的空格比上一行少2个 //8*n-2*i
		for (k = 1; k <= 4 * i + 1; k++)  
			printf("%c", c);//输出左半部分字符小爱心
		for (l = 1; l <= 13 - 4 * i; l++)  
			printf(" "); //中间的空格，每下一行的空格比上一行少4个
		for (m = 1; m <= 4 * i + 1; m++)  
			printf("%c", c);//输出右半部分字符小爱心
		printf("\n");  //每一行输出完毕换行
	}
	for (i = 1; i <= 3; i++) 
	{ //下3行中间没有空格
		for (j = 1; j <= 24 + 1; j++)   
			printf(" "); //左边的空格 //8*(n-1)+1
		for (k = 1; k <= 29; k++)   
			printf("%c", c);//输出字符小爱心
		printf("\n");  //每一行输出完毕换行
	}
	for (i = 7; i >= 1; i--) { //下7行
		for (j = 1; j <= 40 - 2 * i; j++)  
			printf(" "); //左边的空格，每下一行左边的空格比上一行少2个//8*(n+1)-2*i
		for (k = 1; k <= 4 * i - 1; k++)  
			printf("%c", c);//每下一行的字符小爱心比上一行少4个（这个循环是i--）
		printf("\n");  //每一行输出完毕换行
	}
	for (i = 1; i <= 39; i++)    
		printf(" "); //最后一行左边的空格
	printf("%c\n", c);  //最后一个字符小爱心
	for (i = 1; i <= 5; i++)    
		printf("\n"); //最后空出5行
	return 0;

}
#endif

#if 0

#include <stdio.h>

int main()

{
    int i, j, k, n = 0, x = 0, y = 50;

    //爱心的头部没有规律，所以直接打印
    printf("\n\n\n\n\n");
    printf("         lovelove                   lovelove\n");
    printf("       lovelovelove               lovelovelove\n");
    printf("     lovelovelovelove           lovelovelovelove\n");
    printf("   lovelovelovelovelove       lovelovelovelovelove\n");
    printf("  lovelovelovelovelovelo     lovelovelovelovelovelo\n");
    printf(" lovelovelovelovelovelove   lovelovelovelovelovelov\n");
    for (i = 0; i < 2; i++)
    {
        printf("lovelovelovelovelovelovelovelovelovelovelovelovelove\n");

    }

    for (i = 0; i < 5; i++)    //爱心的中间部分的上部分
    {
        y = 50;
        y = y - i * 2;
        n++;
        for (k = 0; k < n; k++)    //在每一行的起始位置先打印空格
        {
            printf(" ");
        }
        while (1)     //空格后面打印love，但是要注意love即使没打印完，也要换行
        {
            if (x < y)
            {
                printf("l");
                y--;
            }
            else
                break;
            if (x < y)
            {
                printf("o");
                y--;
            }
            else
                break; if (x < y)
            {
                printf("v");
                y--;
            }
                else
                break; if (x < y)
            {
                printf("e");
                y--;
            }
                else
                break;
        }
        printf("\n");
    }


    //最下面的部分，具体内容同上，没和上一部分放一起是因为从这行开始多两个空格
    for (i = 0, n = 3; i < 10; i++)
    {
        y = 37;
        y = y - i * 4;
        n++;
        for (k = 0; k < n; k++)
        {
            printf("  ");
        }
        while (1)
        {
            if (x < y)
            {
                printf("l");
                y--;
            }
            else
                break;
            if (x < y)
            {
                printf("o");
                y--;
            }
            else
                break; if (x < y)
            {
                printf("v");
                y--;
            }
                else
                break; if (x < y)
            {
                printf("e");
                y--;
            }
                else
                break;
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}

#endif
