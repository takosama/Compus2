#include "e3_8.h"
#include <stdio.h>
void e3_8::Run()
{
	int a, b;
	printf("êîÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢\n");
	scanf_s("%d", &a);
	printf("êîÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢\n");
	scanf_s("%d", &b);
	int sa = 0;
	if (a > b)
		sa = a - b;
	else
		sa = b - a;
	printf("ç∑ÇÕ%dÇ≈Ç∑",sa);
}

e3_8::e3_8()
{

	printf("e3_8\n");
}


e3_8::~e3_8()
{
}
