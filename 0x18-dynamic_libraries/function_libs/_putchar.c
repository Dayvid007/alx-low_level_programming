#include <unistd.h>
/**
 * _putchar - putchar fnt
 * @p : parameter
 * Return: return 0 for success
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
