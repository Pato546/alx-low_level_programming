#include <stdio.h>

/**
* print_line - display a straight line
* @n: number of times to print (int)
*
* Return: void
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}

int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}
