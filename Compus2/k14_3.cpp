#include "k14_3.h"
#include <iostream>
#include <vector>
#include<numeric>
using namespace std;
k14_3::k14_3()
{
}


k14_3::~k14_3()
{
	
}

int askNum()
{
	int num = 0;
	printf("input num\n");
	scanf_s("%d", &num);
	return num;
}

void k14_3::Run()
{
	vector <int> lot;
	int totalSum = 0;
	int lotCount = 0;
	int MaxLotLng = -10000;
	while (1)
	{
		int num = askNum();
		if (num > -1)
			lot.push_back(num);
		else if (num == -1)
		{
			int sum = accumulate(lot.begin(), lot.end(), 0);
			totalSum += sum;
			printf("lot�̏��v=%d\n", sum);
			int size = lot.size();
			if (MaxLotLng <size)
				MaxLotLng = lot.size();
			lotCount++;
			lot.clear();
		}
		else
		{
			printf("lot��=%d\n", lotCount);
			printf("lot�ő咷=%d\n", MaxLotLng);
			printf("���v=%d\n", totalSum);

			return;
		}
	}
}
