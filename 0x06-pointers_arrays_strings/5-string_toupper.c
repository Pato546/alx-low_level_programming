
/**
* string_toupper - convert lowercase letters to uppercase
* @s: string
* Return: pointer
*/

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}

	return (start);
}
