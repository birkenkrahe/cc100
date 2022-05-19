

/*   Sample output: */
/* #+begin_example */

/* #+end_example */



/* [[file:README.org::*Using a function in a program][Using a function in a program:1]] */
#include <stdio.h>






// function definition
double average (double a,double b){return (a+b)/2;}

int main (void)
{
  double x, y, z;
  printf("Enter three numbers: ");
  scanf("%lf %lf %lf", &x, &y, &z);  // input

  // print averages
  printf("Average of %g and %g: %g\n", x, y, average(x,y));
  printf("Average of %g and %g: %g\n", y, z, average(y,z));
  printf("Average of %g and %g: %g\n", x, z, average(x,z));

  return 0;
}
/* Using a function in a program:1 ends here */
