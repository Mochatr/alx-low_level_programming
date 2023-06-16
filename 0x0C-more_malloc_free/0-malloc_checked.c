#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - It allocates memory using malloc
 * @b: Parameter
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *S;


	S = malloc(b);

	if (S == NULL)
		exit(98);
	return (S);

}
