#include "main.h"
#include <string.h>
/**
 * binary_to_uint - The function that converts binary to decimal
 * @b: The pointer to the parameter
 * Return: The deciaml value of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal <<= 1;
		if (b[i] == '1')
		{
			decimal += 1;
		}
	}
	return (decimal);
}
