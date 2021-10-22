#include <stdio.h>
/**
 * main - print programs name
 * @argc: int
 * @argv : char
 * Return: void
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s \n", argv[0]);
	return (0);
}
