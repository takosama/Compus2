#include "e3_8.h"
#include <stdio.h>
void e3_8::Run()
{
	int a, b;
	printf("数を入力してください\n");
	scanf_s("%d", &a);
	printf("数を入力してください\n");
	scanf_s("%d", &b);
	int sa = 0;
	if (a > b)
		sa = a - b;
	else
		sa = b - a;
	printf("差は%dです",sa);
}

e3_8::e3_8()
{

	printf("e3_8\n");
}


e3_8::~e3_8()
{
}
