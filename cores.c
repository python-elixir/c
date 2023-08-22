#include <stdio.h>
#include <stdbool.h>

int main() {
  // const float pi = 3.14;

  // float mynumber = 5;

  // if (mynumber > pi){
  //   printf("My number is greater than PI\n");
  // } else{
  //   printf("My number is less than PI\n");
  // }

  // (30 > 39) ? printf("True"):printf("False"); //short hand if 

  int day = 5;

  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  default:
    printf("Sunday");
    break;
  }

  
  return 0;
}