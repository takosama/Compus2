#include "e4_15.h"
#include <stdio.h>


e4_15::e4_15()
{
	printf("e4_15\n");
}


e4_15::~e4_15()
{
}

void e4_15::Run()
{
	int start = 0;
	int end = 0;
	int step = 0;
	printf("‰½cm‚©‚ç\n");
	scanf_s("%d", &start);
	printf("‰½cm‚Ü‚Å\n");
	scanf_s("%d", &end);
	printf("‰½cm‚¸‚Â\n");
	scanf_s("%d", &step);
	for (int i = start; i <= end; i += step)
	{
		printf("%dcm %.2fkg\n", i, 1.0*(i - 100)*0.9);
	}
}
