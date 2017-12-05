#include "l4_1.h"
#include<stdio.h>



void l4_1::Run()
{
	int ReTry = 0;
	do
	{
		int No = 0;
		printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &No);

		if (No % 2 == 0)
			printf("‹ô”‚Å‚·\n");
		else
			printf("Šï”‚Å‚·\n");

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
