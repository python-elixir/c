#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    FILE *fptr;

    // Create a file
    fptr = fopen("start.py", "w");

    fprintf(fptr,"print(\"Error!\")");

    // Close the file
    fclose(fptr);
    fptr = fopen("start.py", "a");

    fprintf(fptr,"\n errorr = \"just error\"");
    fprintf(fptr,"\nprint(errorr)");
    fclose(fptr);


    return 0;
}