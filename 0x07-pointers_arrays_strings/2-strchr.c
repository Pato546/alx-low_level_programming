
/**
* _strchr - Returns pointer to the char in pointer
* @s: pointer
* @c: character
* Return: pointer
*/

char *_strchr(char *s, char c)
{
	unsigned int i, s_len;

	s_len = 0;

	while (s[s_len])
	{
		s_len++;
	}

	for (i = 0; i < s_len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

