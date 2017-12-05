#include "e3_7.h"
#include <stdio.h>
void e3_7::Run()
{
	int nums[4];
	for (int i = 0; i < 4; i++)
	{
		printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢%d/4\n", i+1);
		scanf_s("%d", &nums[i]);
	}

	for (int i = 0; i<4; i++)
		for (int j = i; j < 4; j++)
		{
			if (nums[i] > nums[j])
				swap(i, j,nums);
		}
	int min = nums[0];
	printf("min=%d\n", min);
	
}
void e3_7::swap(int i,int j,int* arr)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

e3_7::e3_7()
{
	printf("e3_7\n");
}


e3_7::~e3_7()
{
}
