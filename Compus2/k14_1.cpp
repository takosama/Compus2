#include "k14_1.h"
#include <iostream>
#include<vector>
#include <numeric>
using namespace std;
k14_1::k14_1()
{
	cout<<"k14_1"<<endl;
}


k14_1::~k14_1()
{
}

int ansCount()
{
	cout << "“ü—Í‰ñ”‚ð“ü—Í" << endl;
	int num = 0;
	scanf_s("%d", &num);
	return num;
}

int CoumputeSum(vector<int> v)

{
 return	std::accumulate(v.begin(), v.end(), 0);
}

void printTotal(int v)
{
	cout << "‘‡Œv=" << flush;
	cout << v << endl;

}

void printSum(int v)
{
	cout << "¬Œv=" << flush;
	cout << v << endl;
}

int askNum(int now,int max)
{

	cout << "”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ " << flush;
	cout << now + 1 << "/" << max << endl;
	int num = 0;
	scanf_s("%d", &num);
	return num;
}

void k14_1::Run()
{
	vector<int> vtotal;

	while (1)
	{
		int count = ansCount();
		if (count <= 0)
		{
			int total = CoumputeSum(vtotal);
			printTotal(total);
			return;
		}
		vector<int> v;

		for (int i = 0; i < count; i++)
		{
			int num = askNum(i,count);
			v.push_back(num);
		}
		int sum = CoumputeSum(v);
		vtotal.push_back(sum);
		printSum(sum);
	}
}

void k14_1::_Run()
{
	int i, k, x, sy, so;
	so = 0; 

	printf("how much datas?"); scanf_s("%d", &k);
	while (k>0)
	{
		sy = 0;
		i = 0;
		while (i<k)
		{
			printf("input data : ");
			scanf_s("%d",&x);
			sy = sy + x;
			i = i + 1;
		}
		printf("sy%d\n", sy);
		so = so + sy;
		printf("how mucu datas?");
		scanf_s("%d", &k);
	}
	printf("so%d\n", so);
}
