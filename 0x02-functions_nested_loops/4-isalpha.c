#inlcude "main.h"
/**
 * _isalpha - check if a char is an alphabet
 * @c: is the char to be checked
 * Return: 1 if the char is an alphabet,otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
