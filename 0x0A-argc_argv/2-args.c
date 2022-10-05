#include <stdio.h>

/**
 * main - Print the name of the executable file
 * @argc: function to count Argument
 * @argv: funtion to indicated array of argument strings
 *
 * Return: 0 for succesful exit
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
