#include <iostream>
#include <vector>
using namespace std;

#include "e2_6.h"

e2_6::e2_6()
{
	printf("2-6\n");
}

 void  e2_6::Run()
{
	printf("身長を入力してください\n");
	int lng = 0;
	scanf_s("%d", &lng);
	printf("標準体重は%.1f\n", (lng - 100)*0.9);
}


e2_6::~e2_6()
{
}
