#include<stdio.h>
#include <math.h>

float modified_cosh ( float x, float A){
    return cosh(x)-A;
}
void main (){
    float a, x, delta_x, b, y, A;
    a=0;
    b= 2*M_PI;

    printf ("cienijamais liet., ludzu ievadi A vertibu sekojošajiem vienadojumiem : cosh(x)=A\n");
    scanf("%f", &A);
    x=a;
    delta_x = 0.1;
    printf("\tx\ty\n");

    while (x<b){
        printf("%10.1f%10.1f%10.1f\n", x, cosh(x),modified_cosh(x, A));

        x+= delta_x;
    }
}