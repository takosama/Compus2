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
	printf("2つの整数を入力\n");
	int a = 0;
	int b = 0;
	scanf_s("%d,%d", &a, &b);
	if (a > b)
		printf("大きい\n");
	else if (a < b)
		printf("小さい\n");
	else
		printf("等しい\n");
}

e3_4::~e3_4()
{
}
