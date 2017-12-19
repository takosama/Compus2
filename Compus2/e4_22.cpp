#include "e4_22.h"
#include <stdio.h>


e4_22::e4_22()
{
	printf("e4-22\n");
}


e4_22::~e4_22()
{
}

void e4_22::Run()
{
	int n = 0;
	int m = 0;
	printf("•Ó‚Ì’·‚³‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢d,d\n");
	scanf_s("%d,%d", &n, &m);
	if (n > m)
	{
		int tmp = n;
		n = m;
		m = tmp;
	}
	for (int y = 0; y < n; y++)
	{
	for (int x = 0; x < m; x++)
		printf("*");
	printf("\n");
}
}
