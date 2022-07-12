
/**
* puts_half - print half of the string;
* @s: pointer to string
*
* Return: int
*/

void puts_half(char *s)
{
	int count, half_str;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	half_str = count % 2 == 0 ? count / 2 : (count - 1) / 2;

	while (s[half_str] != '\0')
	{
		_putchar(s[half_str]);
		half_str++;
	}
}

