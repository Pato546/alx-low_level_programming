
/**
* _strchr - Returns pointer to the char in pointer
* @s: pointer
* @c: character
* Return: pointer
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}

