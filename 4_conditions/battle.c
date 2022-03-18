

/* #+name: battle3 */

/* [[file:README.org::battle3][battle3]] */
#include <stdio.h>






int main() {
int response = 0; // initialize response

puts("\n\tIn-Battle Healing\n\n1:\tDrink health potion\n\n2:\tResume battle\n");

printf("\nEnter your selection: ");
scanf("%d", &response);

if (response == 1)
  printf("\nDrinking health potion!\n");

if (response == 2)
  printf("\nResuming battle!\n");
return 0;
}
/* battle3 ends here */
