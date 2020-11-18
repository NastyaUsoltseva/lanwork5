#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int k = 0;
	int g = 0;
	int f = 0;
	int m = 0;
	int z = 0;
	int array[7][8];
	printf("input value of array\n");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			scanf_s("%d ", &array[i][j]);
		}
	}
	printf("first array\n");
	for (int i = 0; i < 7; i++)
	{
		printf("\n");
		for (int j = 0; j < 8; j++)
		{
			printf("%d ", array[i][j]);
		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][0] % 2 != 0)
		{
			a += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][1] % 2 != 0)
		{
			b += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][2] % 2 != 0)
		{
			c += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][3] % 2 != 0)
		{
			k += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][4] % 2 != 0)
		{
			g += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][5] % 2 != 0)
		{
			f += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][6] % 2 != 0)
		{
			m += 1;

		}
	}
	for (int i = 0; i < 7; i++)
	{


		if (array[i][7] % 2 != 0)
		{
			z += 1;

		}
	}
	printf("1 column\n");
	printf("%d", a);
	printf("2 column\n");
	printf("%d", b);
	printf("3 column\n");
	printf("%d", c);
	printf("4 column\n");
	printf("%d", k);
	printf("5 column\n");
	printf("%d", g);
	printf("6 column\n");
	printf("%d", f);
	printf("7 column\n");
	printf("%d", m);
	printf("8 column\n");
	printf("%d", z);


	return 0;
}