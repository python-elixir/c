#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Mystr {
    int mynum;
    char mychar;
    bool mybool;
};

int main(){
    
    // FILE *myfile;
    // FILE *myfolder;

    // myfile = fopen("book.txt","w");

    // fprintf(myfile,"This is text file...");

    // fclose(myfile);
    // myfile = fopen("book.txt","r");
    // char mystring[100];
    // fgets(mystring,sizeof(mystring),myfile);

    // printf("\n%s\n",mystring);

    // fclose(myfile);

    // myfolder = fopen("go.py","r");

    // if (myfolder == NULL) {
    //     printf("This folder doesn't exist!");
    // } else {
    //     fclose(myfolder);
    // }

    struct Mystr s1;

    s1.mybool = true;
    printf("Enter your char and num:...");
    scanf("%c %i\n",&s1.mychar,&s1.mynum);

    printf("My char is\
    %c\n",s1.mychar);
    printf("My number is\
    %i\n",s1.mynum);

    switch (s1.mynum)
    {
    case 1:
        printf("bir");
        break;
    
    default:
    printf("bir emas");
        break;
    }

    return 0;
}