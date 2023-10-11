#include <stdio.h>
#define N 3
int main (void)
{
//N int?? NB nedrikst
//N=20 ?? NB! nedrikst
int i=0;
printf(" i mainiga vertiba sakuma : %d\n", i);
i = i + 1; //te ir 2 operacijas, piešķiršana un saskaitīšana
// saskaitišana ir lielaka prioritate - 1 tiks izpildita
//tad rezultats tiks ievietots atmiņa - vieta pa kreisi
if (i<=N)
{
printf(" i mainiga vertiba nākamā : %d (ta mazaka par %d)\n", i, N);

}
else {
printf(" i mainiga vertiba nākamā ir kluvusi lielaka par %d)\n", N);
printf("aptur darbibu \n");
return 0;
}
return 0;
}
