#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","w");
  if (pFile!=NULL)
  {
printf ("norade uz failu - %p\n", pFile);
    fputs ("fopen example- teksta ieraksts lailā",pFile);

scanf("%c",&c);
    fclose (pFile);
  }
else {
    fputs ("neizdevas failu atvert\n",stderr);
}
  return 0;
}
