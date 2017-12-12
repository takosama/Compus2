#include "e4_7.h"
#include <stdio.h>


e4_7::e4_7()
{
	printf("e4_7\n");
}


e4_7::~e4_7()
{
}

void e4_7::Run()
{
	printf("”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	int n = 0;
	int i = 0;
	scanf_s("%d", &n);

	while (n >= 1<<++i)
		printf("%d ", 1<<i);
	
	printf("\n");
}