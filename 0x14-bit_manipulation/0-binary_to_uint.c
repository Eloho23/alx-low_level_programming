#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as a string to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted unsigned int number, or 0 if the input string is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
