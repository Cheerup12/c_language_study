#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define  MAX 100
#define  max(x,y) x>y?x:y


int main(void)
{
	int a = 20;
	int* p = &a;
	printf("%d\n", *p);
	*p = 123;
	printf("%d\n", MAX);
	
	printf("%d\n", a);
	printf("%zd\n",sizeof p);
	printf("%zd\n", sizeof a);
	printf("%d\n", *p);
	printf("%d\n", a);
	return 0;
}