#include <stdio.h>
#define N 10
int main (void)
{
//N int?? NB nedrikst
//N=20 ?? NB! nedrikst
int i=0;
printf(" i mainiga vertiba sakuma : %d\n", i);
i = i + 1; //te ir 2 operacijas, piešķiršana un saskaitīšana
// saskaitišana ir lielaka prioritate - 1 tiks izpildita
//tad rezultats tiks ievietots atmiņa - vieta pa kreisi
while (i<=N ) //10 <= 10 rezultats 1 dec - nav 0 => cikls vel nostrādās
{
printf("(%d.) i mainiga vertiba nākamā-  %d (ta mazaka par %d)\n",i, i, N);
i = i + 1; // obligti jamaina i vertiba, savadak dabusim bezgaligu ciklu
}

printf("(%d.)  i mainiga vertiba nākamā ir kluvusi lielaka par %d)\n",i, N);
printf("aptur darbibu \n");
return 0;
}

