#include <stdio.h>
int main (void)
{
char c1=45 , c2= 065,c3;// cipari nevar but priekša , c aizņem 1 bitu
int i1= 'F', i2= 0x5695, i3;
float f1= 8.896, f2= 74.3e-2, f32;
double d1= 0.00000001, d2= 1.e-10, d3;

//operaciju petišana
c3 = c2 / c1;
printf ("%d / %d  =%d( rezultata izmers baitos (no amiņa izmers baitos - %ld)%d\n", c2, c1, c2/c1,sizeof(c2/c1), c3);

i3 = i2 % i1; // % operaciju petišsna
printf ("%d %c d%  =%d( rezultata izmers baitos (no amiņa izmers baitos - %ld)%d\n" ,i2,'%', i1, i2%i1, sizeof(i2%i1), i3);

return 0;
}
