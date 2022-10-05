#include <stdio.h>

/**
 * main - Print the name of the executable file
 * @argc: count of argument
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
