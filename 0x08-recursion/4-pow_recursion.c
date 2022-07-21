
/**
* _pow_recursion - return the power of a num
* @x: base
* @y: exponent
* Return: int
*/

int _pow_recursion(int x, int y)
{

	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}

