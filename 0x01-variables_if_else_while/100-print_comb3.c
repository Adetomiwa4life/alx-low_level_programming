#include <stdio.h>


/**
 *
 * main - print posssible combo of two digits
 * Description: print
 */
int main(void)
{
	int a = 0, b;
	while (a <= 9)
	{
		b = 0;
		while(b <= 9)
		{
			if(a !=b && a < b)
		{
			putchar(a + 48);
			putchar(b + 48);

			if(a + b != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++b;
		}
		++a;
	}
	
	putchar('\n');
	return 0;
}
