#include "e3_13.h"
#include <stdio.h>

void e3_13::Run()
{
	int m = 0;
	printf("������͂��Ă�������\n");
	scanf_s("%d",&m);
	switch (m)
	{
	case 3:case 4:case 5:
		printf("�t\n");
		break;

	case 6:case 7:case 8:
		printf("��\n");
		break;

	case 9:case 10:case 11:
		printf("�H\n");
		break;

	case 12:case 1:case 2:
		printf("�~\n");
		break;
	default:
		printf("���݂��Ȃ�\n");
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
