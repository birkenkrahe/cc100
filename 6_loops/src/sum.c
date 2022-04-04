/* Solution */

/*     * Scan numbers one after the other */

/*     * The program should exit when a ~0~ is scanned */

/*     * To sum, we can use the compound operator ~+=~ */

/*     * Pseudocode: */

/*       #+begin_example */
/*       declare and initialize variables */
/*       scan first integer */

/*       while integer non-zero */
/*         sum integer */
/*         scan integer */

/*       print the sum */
/*       #+end_example */
      
/*     * Code: */
      
/*       #+name: sum */

/* [[file:README.org::sum][sum]] */
#include <stdio.h>






int main() {
int n, sum = 0;

printf("Enter integers (0 to terminate).\n");
scanf("%d", &n);
while ( n != 0 ) {
  sum += n;         // sum = sum + n
  printf("%d\n", n);
  scanf("%d", &n);
 }

printf("The sum is %d\n", sum);
return 0;
}
/* sum ends here */
