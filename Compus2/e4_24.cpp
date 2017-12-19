#include "e4_24.h"
#include<stdio.h>


e4_24::e4_24()
{
	printf("e4_24\n");
}


e4_24::~e4_24()
{
}
void Draw(int n,int d)
{
	for (int i = 0; i < d-n-1; i++)
		printf(" ");
	for (int i = 0; i < n*2+1; i++)
		printf("*");
	printf("\n");
}
void e4_24::Run()
{
	int n = 0;
	printf("’i”‚ð“ü—Í\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		Draw(i,n);
	}
}


