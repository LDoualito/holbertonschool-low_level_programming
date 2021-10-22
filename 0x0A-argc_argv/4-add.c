#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - addition arguments
 * @argc : int
 * @argv : string
 * Return: int
 */
int main(int argc, char **argv)
{

	int result = 0, i = 0, j, x, size;

	for (i = 1; i < argc; i++)
	{
		size = strlen(argv[i]);
		for (j = 0; j < size; j++)
		{
			x = argv[i][j];
			if (isdigit(x) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
