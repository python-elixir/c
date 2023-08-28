#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  printf("%s", greetings);
  printf("\n%lu\n",sizeof(greetings));
  
  char txt[] = "It's hard";
  printf(txt);

  // See difference between strlen and sizeof 
  printf("\n%i",strlen(txt));
  printf("\n%i",sizeof(txt));

  char some_text[37] = "ncisubcisbicesudcusn";
  printf("\n%d",sizeof(some_text));
  printf("\n%d\n\n",strlen(some_text));

  char str1[] = "Python";
  char str2[] = "Django";

  strcat(str1,str2);
  printf("%s",str1);  
  printf("\n%d",strcmp(str1,str2));

  return 0;
}