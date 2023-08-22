#include <stdio.h>
#include <stdbool.h>

int main() {

  int myNumbers[] = {1,2,3,4,5,6,7}; 

  printf("%i\n",myNumbers[3]);

  myNumbers[5] = 9;
  printf("%d",myNumbers[5]);
  
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  printf("\n");
  for (j = 0; j < 3; j++) {
    printf("%d\t", matrix[i][j]);
  }
}

char mychar = 'w';
printf("%c",mychar);
  return 0;
}