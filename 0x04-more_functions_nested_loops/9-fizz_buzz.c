#include <stdio.h>

/**
 * fizz_buzz - replace specific alphabet with words
 * Return: no return type
 */
void fizz_buzz(void)
{
	int i;
	char x;
	char y;
	char z;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			x = "Fizz";
			printf("%c", x);
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			y = "Buzz";
			printf("%c", y);
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			z = "FizzBuzz";
			printf("%c", z);
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}
