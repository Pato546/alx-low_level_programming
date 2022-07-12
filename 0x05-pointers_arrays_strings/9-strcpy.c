
/**
* _strcpy - copy one pointer to the other
* @dest: pointer 1;
* @src: pointer 2;
* Return: int
*/

char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

