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
	int result, x, y;

	if (argc == 3){
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
		return (0);
	}
	else{
		printf("Error\n");
		return (1);
	}
}
