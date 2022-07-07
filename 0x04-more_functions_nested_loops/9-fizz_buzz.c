#include <stdio.h>
/**
 * main - print numbers 1-100
 * Fizz if number is a multiple of 3,
 * Buzz for multiples of 5
 * FizzBuzz for muliples of 5 and 3
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else
			printf("%d", num);
		printf(" ");
	}

	printf("\n");

	return (0);
}
