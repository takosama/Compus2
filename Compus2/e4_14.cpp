#include "e4_14.h"

#include<stdio.h>

e4_14::e4_14()
{
	printf("e4_14\n");
}


e4_14::~e4_14()
{
}

void e4_14::Run()
{
	printf("������͂��Ă�������\n");
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d", i % 10);
	}
}
