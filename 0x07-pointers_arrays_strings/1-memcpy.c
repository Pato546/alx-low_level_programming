
/**
* _memcpy - Copies area in memory 
* @dest: pointer 1
* @src: pointer 2
* @n: bytes in memory
* Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + 0);	
	}

	return (dest);
}

