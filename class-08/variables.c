#include <stdio.h>

int main (void){

 int i;// /diskreta mainiga deklarešana- noteikta izmēra atmiņas apgabals
// sasaistīšana ar norādīto identifikatoeu
//vertiba nav zināma
printf(" i mainiga vertiba(izmers): %ld\n",sizeof(i) );
printf(" i mainiga vertiba(atrašanas vieta atmiņa): %p\n", &i );
printf(" i mainiga vertiba(okt): %#o\n", i );
printf(" i mainiga vertiba(dec): %d\n", i );
printf("\n");
//mainiga noluks ir saglabāt un mainīt info. jeb vērtibu

i = 25; // visbiežak mainiga vertibs maiņai mes pielietosim piešķiršanas peraciju
//lielums ,kas ir sareķināta pa labi, tiek ierakstita atmiņas apgabala

char c1, c2;
float f1=0.0456,f2= 1.896e2;
double d1, d2;
printf(" c1 mainiga vertiba(izmers): %ld\n",sizeof(c1) );
printf(" c1 mainiga vertiba(atrašanas vieta atmiņa): %p\n", &c1 );
printf(" c2 mainiga vertiba(izmers): %ld\n",sizeof(c2) );
printf(" c2 mainiga vertiba(atrašanas vieta atmiņa): %p\n", &c2 );
printf(" f1 mainiga vertiba(izmers): %ld\n",sizeof(f1) );
printf(" f1 mainiga vertiba(atrašanas vieta atmiņa): %p\n", &f1 );
printf("f2 mainiga vertiba(izmers): %ld\n",sizeof(f2) );

printf(" f2  mainiga vertiba(atrašanas vieta atmiņa): %p\n", &f2 );

printf(" d1 mainiga vertiba(izmers): %ld\n",sizeof(d1) );
printf(" d2 mainiga vertiba(izmers): %ld\n",sizeof(d2) );
printf(" d1 mainiga vertiba(atrašanas vieta atmiņa): %p\n",& d1 );
printf(" d2 mainiga vertiba(atrašanas vieta atmiņa): %p\n", &d2 );

float f3 = f1; //mainigas vertibss kopešana


printf(" f3 mainiga vertiba(izmers): %ld\n",sizeof(f3) );
printf(" f3 mainiga vertiba(atrašanas vieta atmiņa): %p\n", &f3 );

int *i_adress = &i;
printf(" f3 mainiga vertiba(izmers): %ld\n",sizeof(i_adress) );
printf(" vertiba, kura ir atrodama pec i-adreses mainiga vertiba(atrašanas vieta atmiņa): %d\n", *i_adress );

return 0;

}
