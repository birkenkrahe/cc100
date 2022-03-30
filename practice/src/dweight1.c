#include <stdio.h>






#include <stdio.h>

int main(void)
{
  // declare variables and constants
  const int INCHES_PER_POUND = 166;
  int height, length, width, volume, weight;

  // Enter input
  printf("Enter the box height: ");
  scanf("%d", &height);
  printf("Enter the box length: ");
  scanf("%d", &length);
  printf("Enter the box width: ");
  scanf("%d", &width);

  // compute volume and dimensional weight
  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND-1) / INCHES_PER_POUND;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
