#include "main.h"
/**
 * swap_int - Takes in two varriable integers and swaaps them
 * @author Anisah
 * @a: swaps and stores address of b
 * @b: swaps and stores adress of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;

	*b = *a;
	*a = change;
}
