#include <stdio.h>
/*more header stuff*/

/*betty style goes brrrr*/
int main () {
   char c;

     for(c = 'a' ; c <= 'z' ; c++) {
	     if (( c == 'e') || (c == 'q'))
	     {
	     c++;
	     putchar(c);
		     }
	     else putchar(c);
   }
   putchar('\n');
   return(0);
}
