#include "main.h"
/**
 * swap_int - The function that wil change the pointer variables
 * @a: The first pointer variable to be changed
 * @b: The Second pointer bariable to be changed
 */
void swap_int(int *a, int *b)
{
int circle = *a;

*a = *b;

*b = circle;
}
