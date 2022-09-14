#include "main.h"

/**
 * _islower – function to check for lowercase character
 *
 * @c: theint we use for argument of function
 *
 * Return: 1 if int c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
