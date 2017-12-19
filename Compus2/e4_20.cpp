#include "e4_20.h"
#include <stdio.h>


e4_20::e4_20()
{
	printf("e4_20\n");
}


e4_20::~e4_20()
{
}

void e4_20::Run()
{
	printf(" | 1| 2| 3| 4| 5| 6| 7| 8| 9|\n");
	printf("-----------------------------\n");

	for (int i = 1; i <= 9; i++)
	{
		printf("%d|", i);
		for (int j = 1; j <= 9; j++)
			printf("%2d|", i*j);
		printf("\n-----------------------------\n");
	}
}
