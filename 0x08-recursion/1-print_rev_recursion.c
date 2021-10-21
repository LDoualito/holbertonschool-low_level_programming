#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 */
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int h = 1;

    if (len < h)
    {
        swap(&s[len], &s[h]);
        swap(s, len + 1, h - 1);
    }
}
