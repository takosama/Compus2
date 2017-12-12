#include "e4_13.h"
#include <stdio.h>


e4_13::e4_13()
{
	printf("e4_13\n");
}


e4_13::~e4_13()
{
}

void e4_13::Run()
{
	int n = 0;
	printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &n);
	printf("%d", (int)(0.5*n*(n + 1)));
}
