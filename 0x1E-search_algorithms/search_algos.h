#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/* Prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void display_array(const int *array, size_t left, size_t right);

#endif /* SEARCH_ALGOS_H */
