#include <unistd.h>
/**
 * _putchar - writes the character c to to stdout
 * ac: the character to print
 * Return: on success 1, on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
