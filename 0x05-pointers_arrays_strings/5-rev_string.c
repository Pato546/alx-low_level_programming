
/**
* rev_string - print string in reverse order;
* @s: pointer to string
*
* Return: void
*/

void rev_string(char *s)
{
	int str_len, i, temp;

	str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}


	for (i = 0; i < str_len / 2; i++)
	{
		temp = s[i];
		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp;
	}

}

