#include "e3_13.h"
#include <stdio.h>

void e3_13::Run()
{
	int m = 0;
	printf("月を入力してください\n");
	scanf_s("%d",&m);
	switch (m)
	{
	case 3:case 4:case 5:
		printf("春\n");
		break;

	case 6:case 7:case 8:
		printf("夏\n");
		break;

	case 9:case 10:case 11:
		printf("秋\n");
		break;

	case 12:case 1:case 2:
		printf("冬\n");
		break;
	default:
		printf("存在しない\n");
		break;
	}
}
e3_13::e3_13()

{
	printf("e3_13\n");
}


e3_13::~e3_13()
{
}
