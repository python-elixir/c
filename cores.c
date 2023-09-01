#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

int myNumbers[4] = {25, 50, 75, 100};
int *ptr = myNumbers;
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", *(ptr + i));
}
int a,b;
a = 2;
b = 3;
printf("%d",a*b);
  // char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  // printf("%s", greetings);
  // printf("\n%lu\n",sizeof(greetings));
  
  // char txt[] = "It's hard";
  // printf(txt);

  // // See difference between strlen and sizeof 
  // printf("\n%i",strlen(txt));
  // printf("\n%i",sizeof(txt));

  // char some_text[37] = "ncisubcisbicesudcusn";
  // printf("\n%d",sizeof(some_text));
  // printf("\n%d\n\n",strlen(some_text));

  // char str1[] = "Python";
  // char str2[] = "Django";

  // strcat(str1,str2);
  // printf("%s",str1);  
  // printf("\n%d",strcmp(str1,str2));

  // Create an int and a char variable
// int myNum;
// char myChar;

// // Ask the user to type a number AND a character
// printf("Type a number AND a character and press enter: \n");

// // Get and save the number AND character the user types
// scanf("%d %c", &myNum, &myChar);

// // Print the number
// printf("Your number is: %d\n", myNum);

// // Print the character
// printf("Your character is: %c\n", myChar);

// // Pointers

// printf("%p\n",&myNum);
// printf("%p\n",&myChar);

// int myAge = 43;     // An int variable
// int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// // Output the value of myAge (43)
// printf("%d\n", myAge);

// // Output the memory address of myAge (0x7ffe5367e044)
// printf("%p\n", &myAge);

// // Output the memory address of myAge with the pointer (0x7ffe5367e044)
// printf("%p\n", ptr);

// int myAge = 43;     // Variable declaration
// int* ptr = &myAge;  // Pointer declaration

// // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
// printf("%p\n", ptr);

// // Dereference: Output the value of myAge with the pointer (43)
// printf("%d\n", *ptr);

// printf("%lu\n",sizeof(char));
// printf("%lu\n",sizeof(float));
// printf("%lu\n",sizeof(bool));
// printf("%lu\n",sizeof(double));
  return 0;
}