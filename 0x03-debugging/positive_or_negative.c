#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positve\n",i);
	else if (i == 0)
		printf("%d is 0,_n",i);
	else
		printf("%d is negative\n",i);
}
