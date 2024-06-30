#include <stdlib.h>

/**
 * random_sf - generate a random seeded number.
 * Description: Generate a random seeded number in a
 * Specific interval [a;b] and return the number
 * back. this function will take much more time
 * then the random_f().
 * @a: which is equal to the first number in the
 * desired range of consecutive integers.
 * @b: which is equal to the width of the
 * @seed: seeded number.
 * desired range of consecutive integers.
 * Return: The random number that has been generated.
 */

int random_sf(int a, int b, int seed)
{
	srand(seed);
	return (a + rand() % b);
}
