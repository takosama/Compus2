#include "e3_11.h"
#include <stdio.h>

void e3_11::Run()
{

	int a, b;
	printf("数を入力してください\n");
	scanf_s("%d", &a);
	printf("数を入力してください\n");
	scanf_s("%d", &b);
	int sa = a - b;
	if (sa > 10 || sa < -10)
		printf("差は11以上です");
	else
		printf("差は10以下です");
}
e3_11::e3_11()
{
	printf("e3_11\n");
}


e3_11::~e3_11()
{
}
