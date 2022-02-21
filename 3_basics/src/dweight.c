

/*   #+RESULTS: dweight */
/*   : The dimensional weight is 6 */

/* * [X] Now for the final program [[dweight_c]]. This time, we allow for */
/*   tangling the program as ~dweight.c~. */
/*   #+name: dweight_c */

/* [[file:../README.org::dweight_c][dweight_c]] */
#include <stdio.h>

int main(void)
{
  // declare variable types
  int height, length, width, volume, weight;

  // variable assignments
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  // print results
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
/* dweight_c ends here */
