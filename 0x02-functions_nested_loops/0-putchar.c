#include "main.h"

int main(void) 
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_purchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

int _putchar(char word)
{
	return (write(1, &word, 1));
}
