#include <stdlib.h>

/**
 * random_f - generate a random number.
 * Description: Generate a random number in a
 * Specific interval [a;b] and return the number
 * back.
 * @a: which is equal to the first number in the
 * desired range of consecutive integers.
 * @b: which is equal to the width of the
 * desired range of consecutive integers.
 * Return: The random number that has been generated.
 */

int random_f(int a, int b)
{
	return (a + rand() % b);
}
