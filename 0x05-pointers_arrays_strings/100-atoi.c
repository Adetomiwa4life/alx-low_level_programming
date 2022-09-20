#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	unsigned int numb = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			numb = (numb * 10) + (*s - '0');
		else if (numb > 0)
			break;
	} while (*s++);

	return (numb * sign);
}
