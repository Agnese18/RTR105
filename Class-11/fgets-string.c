#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  //fgets read string
                                       //sizeof results to 30 characters as input
    printf("Name: ");
    puts(name);    // display string prints the name 
    return 0;
}
