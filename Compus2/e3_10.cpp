#include "e3_10.h"

#include<stdio.h>


void e3_10::Run()
{
	int nums[3];
	int IsCompareNum = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("数を入力してください%d/3\n", i + 1);
		scanf_s("%d", &nums[i]);
	}
	for (int i = 0; i < 3; i++)
		for (int j = i+1; j < 3; j++)
		{
			if (nums[i] == nums[j])
				IsCompareNum++;
		}
	if (IsCompareNum == 0)
		printf("3つの値は異なります");
	else if (IsCompareNum == 1)
		printf("2つの値が等しい");
	else if (IsCompareNum == 3)
		printf("3つの値が等しい");
	else
		printf("error");

	printf("\n");
}



e3_10::e3_10()
{
	printf("e3_10\n");
}


e3_10::~e3_10()
{
}
