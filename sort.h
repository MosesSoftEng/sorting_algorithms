/* #ifdef - preprocessor directive, checks if MACRO is not already defined
 * by #define directive
 */
#ifndef SORT_H
#define SORT_H

/*Libraries*/
#include <stdlib.h> /*size_t*/

/*Functions prototypes*/
void bubble_sort(int *array, size_t size);

#endif
