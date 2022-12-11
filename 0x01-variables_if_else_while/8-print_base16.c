#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = '0';/*initialize num to 0*/
	char letter = 'a';/*initialize letter to a*/

	while (num <= '9')/*print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter  <= 'f')/*print a-f*/
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
