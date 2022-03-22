#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		while (i == 0)
		{
			printf("%d", a[i])0;
			i++;
		}
		printf(", %d", a[i]);
	}
	printf("\n");
}
