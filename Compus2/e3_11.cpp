#include "e3_11.h"
#include <stdio.h>

void e3_11::Run()
{

	int a, b;
	printf("������͂��Ă�������\n");
	scanf_s("%d", &a);
	printf("������͂��Ă�������\n");
	scanf_s("%d", &b);
	int sa = a - b;
	if (sa > 10 || sa < -10)
		printf("����11�ȏ�ł�");
	else
		printf("����10�ȉ��ł�");
}
e3_11::e3_11()
{
	printf("e3_11\n");
}


e3_11::~e3_11()
{
}
