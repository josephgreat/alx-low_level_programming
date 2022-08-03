#include "function_pointers.h"

/**
 * print_name - calls a callback function and prints name
 * @name: name to be passed to callback
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
