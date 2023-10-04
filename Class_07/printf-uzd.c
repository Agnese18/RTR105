/* scanf example */
#include <stdio.h>

int main ()
{
  char str [80];
  int i;
  int a;
  printf ("Enter your family name: ");
  scanf ("%79s",str);  
  printf ("Enter your age: ");
  scanf ("%d",&i);
 printf ("Enter your birth year: ");
 scanf ("%y" ,&a);
  printf ("Mr. %s ,%y ,  %d years old.\n",str,i);
  printf ("Enter a hexadecimal number: ");
  scanf ("%x",&i);
  printf ("You have entered %#x (%d).\n",i,i);
  
  return 0;
}
