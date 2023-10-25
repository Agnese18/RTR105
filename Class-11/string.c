#include <stdio.h>
int main()
{
    char name[20];//20 characters as a imput for name
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);//if you enter name and sername with space 
                                     //you get only name as output-
                                     // string only stores name because of the space
    return 0;
}
