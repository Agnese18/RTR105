#include <stdio.h>
#include <string.h>

int main(void) {

char name[]= "name";
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);
 // char name[] = "Harry Potter";

 printf("%c", *name);     // Output: H
 printf("%c", *(name+1));   // Output: a
 printf("%c\n", *(name+7));   // Output: o
 printf(" rindas garums baitos : %ld\n," , sizeof(name));//rinda baitos

  printf("Length of string a = %zu \n",strlen(name));
 // printf("sizeof(name(...)) -> %ld bytes\n\n",sizeof(name));


//return 0; 
}
