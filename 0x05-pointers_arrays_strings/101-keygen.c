#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int myand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myand = (rand() % 125) + 1;
		printf("%c", myand);
		total -= myand;
	}
	printf("%c", total);

	return (0);
}
