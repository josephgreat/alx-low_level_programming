#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: quotient of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the modulus of a by b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder in a
 */
int op_mod(int a, int b)
{
	return (a % b);
}
