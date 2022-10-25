#include "main.h"

/**
 * swap_int -> given two intigers swap the values they are holding
 * @a: paremeter 1
 * @b: paremeter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
