#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
struct book
{
	char name[20];
	short price;
};

int main(void)
{
	struct book m1 = { "C���Գ���",55 };
	printf("����:%s\n", m1.name);
	printf("�۸�:%dԪ\n", m1.price);
	
	printf("\n");
	strcpy(m1.name, "����Ԫ����");
	struct book* p = &m1;
	printf("����:%s\n", p->name);
	printf("�۸�:%dԪ\n", p->price);
	printf("\n");

	m1.price = 65;
	printf("�۸�:%s\n", m1.name);
	printf("�۸�:%dԪ\n", m1.price);
	return 0;
}




//int main(void)
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%lf\n", d);
//	printf("%d\n", sizeof pd);
//	printf("........................................\n");
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	return 0;
//}
