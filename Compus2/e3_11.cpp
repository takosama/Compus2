#include "e3_11.h"
#include <stdio.h>

void e3_11::Run()
{

	int a, b;
	printf("”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &a);
	printf("”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &b);
	int sa = a - b;
	if (sa > 10 || sa < -10)
		printf("·‚Í11ˆÈã‚Å‚·");
	else
		printf("·‚Í10ˆÈ‰º‚Å‚·");
}
e3_11::e3_11()
{
	printf("e3_11\n");
}


e3_11::~e3_11()
{
}
