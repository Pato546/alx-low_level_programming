
/**
* _print_rev_recursion - print reverse string
* @s: string
* Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}

