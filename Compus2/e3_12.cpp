#include "e3_12.h"
#include<stdio.h>
void e3_12::Run()
{

	int n = 0;
	printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%d", &n);
	int moded = n % 2;
	switch (moded)
	{
	case 0:
		printf("‹ô”");
		break;
	case 1:
		printf("Šï”");
		break;
	default:
		printf("error");
		break;
	}
	printf("‚Å‚·\n");
}

e3_12::e3_12()
{
	printf("e3_12\n");
}


e3_12::~e3_12()
{
}
