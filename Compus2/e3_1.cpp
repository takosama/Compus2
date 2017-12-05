#include "e3_1.h"
#include <iostream>
#include <vector>
using namespace std;



e3_1::e3_1()
{
	printf("3-1\n");
}

void e3_1::Run()
{
	printf("2‚Â‚Ì®”‚ğ“ü—Í\n");
	int a = 0;
	int b = 0;
	scanf_s("%d,%d", &a, &b);
	if (a%b == 0)
		printf("%d‚Í%d‚Ì–ñ”\n", b, a);
	else
		printf("%d‚Í%d‚Ì–ñ”‚Å‚È‚¢\n", b, a);
}

e3_1::~e3_1()
{
}
