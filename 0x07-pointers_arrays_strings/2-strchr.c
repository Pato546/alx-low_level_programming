
/**
* _strchr - Returns pointer to the char in pointer
* @s: pointer
* @c: character
* Return: pointer
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}

	return ('\0');
}

