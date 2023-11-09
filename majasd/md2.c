#include <stdio.h>

int main ()
{
  unsigned char n;  
  printf ("ievadi naturalu skaitlii: ");
  scanf ("%hhd",&n);
  printf ("%hhd & 1 -> %hhd %d \n ",n,n&1,(n&1)>>0);
  printf ("%hhd & 2 -> %hhd %d \n",n, n&2,(n&2)>>1);
  printf ("%hhd & 4 -> %hhd %d \n", n,n&4, (n&4)>>2);
  printf ("%hhd & 8 -> %hhd %d \n",n, n&8, (n&8)>>3);
  printf ("%hhd & 16 -> %hhd %d \n", n, n&16,( n&16)>>4);
  printf ("%hhd & 32 -> %hhd %d \n", n, n&32, (n&32)>>5);
  printf ("%hhd & 64 -> %hhd %d \n", n, n&64, (n&64)>>6);
  printf ("%hhd & 128 -> %hhd %d \n", n, n&128, (n&128)>>7);
  
return 0;  

}
