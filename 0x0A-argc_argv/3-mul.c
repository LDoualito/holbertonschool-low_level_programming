#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc : int
 * @argv : char
 * Return : 0 | 1
 */
int main (int argc, char **argv)
{
	int result;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc == 3){
		result = x * y;
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
