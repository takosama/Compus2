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
	printf("2�̐��������\n");
	int a = 0;
	int b = 0;
	scanf_s("%d,%d", &a, &b);
	if (a%b == 0)
		printf("%d��%d�̖�\n", b, a);
	else
		printf("%d��%d�̖񐔂łȂ�\n", b, a);
}

e3_1::~e3_1()
{
}
