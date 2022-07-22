
/**
* _strcat - concatenates two strings
* @dest: pointer 1;
* @src: pointer 2;
* Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}

