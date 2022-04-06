/* Summing numbers */

/*    * The program [[sum]] below is only missing the ~while~ statement. */

/*      1) Use ~n !=0~ as the controlling expression */
/*      2) Inside the loop, */
/* 	- sum um with ~sum += n~ */
/* 	- scan the next number ~n~ */
/*      3) Run the code block with the preset input file */
/*      4) Tangle the file, compile and run it on the CMD line */

/*      #+name: sum */

/* [[file:while.org::sum][sum]] */
#include <stdio.h>






int main() {
int n, sum = 0;

printf("Enter integers (0 to terminate).\n");
scanf("%d", &n);
  _______________ // sum up
  _______________ // scan n 
 }

printf("The sum is %d\n", sum);
return 0;
}
/* sum ends here */
