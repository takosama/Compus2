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
	printf("2�̐��������\n");
	int a = 0;
	int b = 0;
	scanf_s("%d,%d", &a, &b);
	if (a > b)
		printf("�傫��\n");
	else if (a < b)
		printf("������\n");
	else
		printf("������\n");
}

e3_4::~e3_4()
{
}
