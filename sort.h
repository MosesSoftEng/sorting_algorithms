#ifndef SORT_H
#define SORT_H
/*
 * #ifdef - preprocessor directive, checks if MACRO is not already defined
 * by #define directive
 */

/* Libraries */
#include <stdlib.h> /* size_t library*/
#include <stdio.h>

/* Functions prototypes */
void bubble_sort(int *array, size_t size);

/* Helper Functions */
void print_array(int *a, int n);

#endif
