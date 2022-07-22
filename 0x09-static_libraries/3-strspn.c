
/**
* _strspn - finds a character in a string
* @s: character pointer
* @accept: chars
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int substr_counter, i, j;
	unsigned int s_len, accept_len;

	substr_counter = 0;
	i = 0;
	j = 0;
	s_len = 0;
	accept_len = 0;

	while (s[s_len])
	{
		s_len++;
	}

	while (accept[accept_len])
	{
		accept_len++;
	}

	for (i = 0; i < accept_len; i++)
	{

		for (j = 0; j < s_len; j++)
		{
			if (accept[i] == s[j])
			{
				substr_counter++;
				break;
			}
		}
		if (j == s_len)
		{
			return (substr_counter);
		}
	}

	return (substr_counter);

}

