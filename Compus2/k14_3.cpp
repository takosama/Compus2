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
			printf("lotÇÃè¨åv=%d\n", sum);
			int size = lot.size();
			if (MaxLotLng <size)
				MaxLotLng = lot.size();
			lotCount++;
			lot.clear();
		}
		else
		{
			printf("lotêî=%d\n", lotCount);
			printf("lotç≈ëÂí∑=%d\n", MaxLotLng);
			printf("ëçåv=%d\n", totalSum);

			return;
		}
	}
}
