#include "e3_12.h"
#include<stdio.h>
void e3_12::Run()
{

	int n = 0;
	printf("数を入力してください");
	scanf_s("%d", &n);
	int moded = n % 2;
	switch (moded)
	{
	case 0:
		printf("偶数");
		break;
	case 1:
		printf("奇数");
		break;
	default:
		printf("error");
		break;
	}
	printf("です\n");
}

e3_12::e3_12()
{
	printf("e3_12\n");
}


e3_12::~e3_12()
{
}
