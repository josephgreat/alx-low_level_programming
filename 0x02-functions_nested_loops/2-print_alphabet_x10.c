/**
 * File: 2-print_alphabet_x10.c
 * Author: Joseph
 * Description: renders a function that prints alphabets in lower case 10x
 */
#include "main.h"

/**
 * print_alphabet_x10: prints alphabets 10x
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}	
		_putchar('\n');
	}
}
