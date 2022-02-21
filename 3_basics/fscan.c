

/* * SOLUTION: change ~int~ to ~float~ in the declaration, and ~%d~ to */
/*   ~%f~ in the ~scanf~ function. */
/*   #+name: fscan */

/* [[file:README.org::fscan][fscan]] */
#include <stdio.h>






int main() {
float i;
puts("Enter an floating point number!");
scanf("%f", &i);
printf("You entered %f\n", i);
return 0;
}
/* fscan ends here */
