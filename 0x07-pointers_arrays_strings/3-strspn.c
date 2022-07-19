
/**
* _strspn - finds a character in a string
* @s: character pointer
* @accept: chars
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int substr_counter, i;

	substr_counter = 0;
	i = 0

	while (s[i])
	{
		if (s[i] ==	accept[i])
		{
			substr_counter++;
		}
		else
		{
			return (substr_counter);
		}
		i++;
	}
	return (substr_counter);
}

