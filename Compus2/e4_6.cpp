#include "e4_6.h"
#include <stdio.h>




e4_6::e4_6()
{
	printf("e4-6\n");
}


e4_6::~e4_6()
{
}

void e4_6::Run()
{
	printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	int n = 0;
	int i = 2;
	scanf_s("%d",&n);
	while (i<=n)
	{
		printf("%d ", i);
		i += 2;
	}
	printf("\n");
}
