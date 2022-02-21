/* Compute the dimensional weight of a box */

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
