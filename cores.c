#include <stdio.h>
#include <stdbool.h>

int main() {
  
  // int i = 10;
  
  // do
  // {
  //   printf("%d\n",i);
  //   i--;
  // } while (i > 7);

// int i;

// for (i = 0; i < 5; i++) {
//   printf("%d\n", i);
// }

// int i, j;

// // Outer loop
// for (i = 1; i <= 2; ++i) {
//   printf("\n");  // Executes 2 times

//   // Inner loop
//   for (j = 1; j <= 3; ++j) {
//     printf(" Inner: %d\t", j);  // Executes 6 times (2 * 3)
//   }
// }  

int i;

// for (i = 0; i < 10; i++) {
//   if (i == 4) {
//     break;
//   }
//   printf("%d\n", i);
// }


for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
  return 0;
}