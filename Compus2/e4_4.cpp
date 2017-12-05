#include "e4_4.h"
#include<stdio.h>


void e4_4::Run()
{
	int No = 0;
	printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &No);
	if (No <= 0)
		return;
	printf("%d", No);

	while (true)
	{
		No--;
		printf("%d ", No);
		if (No == 1)
		{
			printf("\n");
			return;
		}
	}
}

e4_4::e4_4()
{
	printf("e4_4\n");
}


e4_4::~e4_4()
{
}
