#include <stdio.h>
#include <string.h>
/**
 *main - print stuff wihtout printf
 *
 * Return: 1 if the text is printed. 0 otherwise
 */
int main(void)
{
char str1[52];
strcpy(str1, "\"Programming is like building a multilingual puzzle");
puts(str1);
return (0);
}
