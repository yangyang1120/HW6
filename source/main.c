#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t i;
	int hold;
	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	for (pass = 1; pass < SIZE - 1; ++pass)
	{
		for (i = pass - 1; i < SIZE - 1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			if (a[0] < a[1] && a[2] < a[3] && a[4] < a[5] && a[6] < a[7] && a[7] < a[8] && a[8] < a[9])break;
		}
	}
	puts("\nData items in ascending order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	puts("");
	system("pause");
	return 0;
}