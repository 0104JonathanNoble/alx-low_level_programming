#include <stdio.h>
/**
 * main - Entry point
 * Print 1 to 100
 * Print Fizz for multiples of 3, Buzz for 5 and FizzBuzz for both
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1;i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) ==0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i == 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
