#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @: size of memory to be allocated.
 *
 * Return: pointer to allocate memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
