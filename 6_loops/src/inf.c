/* Infinite loops */

/*    * If the controlling expression always has a non-zero value, the */
/*      ~while~ statement will not terminate */

/*    * The compiler does not check this. */

/*      #+name: endless */

/* [[file:README.org::endless][endless]] */
#include <stdio.h>






int main() {
while (1)
  puts("Still running...\n");
return 0;
}
/* endless ends here */
