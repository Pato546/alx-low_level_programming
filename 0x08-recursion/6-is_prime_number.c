
/**
* check_modulo - f...
* @n: int
* @divisor: int
* Return: int
*/

int check_modulo(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (check_modulo(n, divisor + 1));
}

/**
* is_prime_number - f...
* @n: int
* Return: int
*/

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	return check_modulo(n, 2);
}

