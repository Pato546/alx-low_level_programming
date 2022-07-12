#include <stdio.h>

/**
* print_array - Entry point
* @a: array
* @n: length of array
* Return: void
*/

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
}

