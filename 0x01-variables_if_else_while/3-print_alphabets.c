#include <stdio.h>
/*more header stuff*/

/*betty style goes brrrr*/
int main () {
   char c;

   for(c = 'a' ; c <= 'z' ; c++) {
      putchar(c);
   }
   for(c = 'A' ; c <= 'Z' ; c++) {
     putchar(c);
   }
   putchar('\n');
   return(0);
}
