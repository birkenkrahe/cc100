#include <stdio.h>






int main() {
int x, y, z, u, n;
n = scanf("%d", &x);
printf("n = %d\n", n);                 // prints 1
n = scanf("%d%d", &x, &y);
printf("n = %d\n", n);                 // prints 2
n = scanf("%d%d%d", &x, &y,&z);
printf("n = %d\n", n);                 // prints 3
n = scanf("%d%d%d%d", &x, &y,&z, &u);
printf("n = %d\n", n);                 // prints 3
return 0;
}
