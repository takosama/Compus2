#include "e4_2.h"
#include<stdio.h>
#include <math.h>

int e4_2::sum(int min, int max)
{
	int rtn = 0;
	int i = min;
	while (1)
	{
		if (i <= max)
		{
			rtn += i;
			i++;
		}
		else
			break;
	}
	return rtn;
}

int e4_2::min(int n, int m)
{
	if (n > m)
		return m;
	return n;
}

int e4_2::max(int n, int m)
{
	if (n > m)
		return n;
	return m;
}

e4_2::e4_2()
{
	printf("e4_2\n");
}


e4_2::~e4_2()
{
}

void e4_2::Run()
{
	int n = 0;
	int m = 0;
	printf("‚Q‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ (d,d)\n");
	scanf_s("%d,%d",&n,&m);
	int Max = max(n, m);
	int Min = min(n, m);
	int Sum = sum(Min, Max);
	printf("%d‚©‚ç%d‚Ì‡Œv‚Í%d‚Å‚·\n", Min, Max, Sum);
}
