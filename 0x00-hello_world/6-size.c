#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int LLintType;
	float floatType;

/**
 * size of is used to get the size of variables
 */
	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of long int: %zu bytes\n", sizeof(longintTpe));
	printf("size of long long int: %zu bytes\n", sizeof(LLintType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
		return (0);
}
