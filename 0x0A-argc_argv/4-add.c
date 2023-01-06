#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: parameter count
 * @argv: parameter pointer
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
