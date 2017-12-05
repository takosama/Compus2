#include "e3_4.h"

#include <iostream>
#include <vector>
using namespace std;



e3_4::e3_4()
{
	printf("3-4\n");

}
void e3_4::Run()
{
	printf("2‚Â‚Ì®”‚ð“ü—Í\n");
	int a = 0;
	int b = 0;
	scanf_s("%d,%d", &a, &b);
	if (a > b)
		printf("‘å‚«‚¢\n");
	else if (a < b)
		printf("¬‚³‚¢\n");
	else
		printf("“™‚µ‚¢\n");
}

e3_4::~e3_4()
{
}
