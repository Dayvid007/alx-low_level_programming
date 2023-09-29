#include "main.h"
/**
 * factorial - The function that prints the factorial
 * @n: The parameter of the funtioin
 * Return:0 if succes and (-1) to indcate error
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
