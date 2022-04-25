#include <stdlib.h>
#include <time.h>

/**
 * positve_or_negative - prints if an integer is postive or negative
 */
void positve_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%d is positive \n", i);
	else if (i == 0)
		printf("%d is negative \n", i);
	else
		printf("%d is zero \n", i);
}
