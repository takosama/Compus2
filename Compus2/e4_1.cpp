#include "e4_1.h"
#include<stdio.h>


int e4_1::sign(int n)
{
	if (n == 0)
		return 0;
	if (n > 0)
		return 1;
	return - 1;
}

e4_1::e4_1()
{
	printf("e4_1\n");
}


e4_1::~e4_1()
{
}

void e4_1::Run()
{

	while (1)
	{
		printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		int No = 0;
		scanf_s("%d", &No);

		printf("%d‚Í", No);
		printf(sign(No) == 0 ? "0" : sign(No) > 0 ? "³‚Ì”" : "•‰‚Ì”");
		printf("‚Å‚·\n");

		int retry = 0;
		printf("retry? Y=0/N=other\n");
		scanf_s("%d", &retry);
		if (retry != 0)
			break;
	}
}