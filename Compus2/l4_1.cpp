#include "l4_1.h"
#include<stdio.h>



void l4_1::Run()
{
	int ReTry = 0;
	do
	{
		int No = 0;
		printf("��������͂��Ă�������\n");
		scanf_s("%d", &No);

		if (No % 2 == 0)
			printf("�����ł�\n");
		else
			printf("��ł�\n");

		printf("ReTry? Y=0/N=9\n");
		scanf_s("%d", &ReTry);
	} while (ReTry == 0);
	
}

l4_1::l4_1()
{
	printf("l4_1\n");
}


l4_1::~l4_1()
{
}
