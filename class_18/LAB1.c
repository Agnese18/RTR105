#include<stdio.h>
#include<math.h>
double mans-cosh(double x){
    double a, S;
    int k=0;

    a =1;
    S=a;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);

     while(k<3){
        k++;
        a = (pow(x, 2))/(4*pow(k, 2)-2*k);
        S=S +a;
        printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
    }
 return S;
}

void main(){

    double x, y, yy;
    printf ("cosh aprekinasana:");
    printf ("ievadi x vērtību: ");
    scanf ("%f",&x);
    
    y= cosh(x);
    printf("standarta funkcija cosh - y=cosh(%.2f)=%.2f\n", x,y);
    

    yy= mans-cosh (x);
   
    printf("lietotaja funkcija - y= mans-cosh(%.2f) caur summu : %.2f\n", x, yy);
    
    printf("           500");
    printf("          ______");
    printf("          \ ");
    printf("           \ ");
    printf("            \            (pow(x, 2*k))");
    printf("cosh(%.2f)=  >        ________________________");
    printf("             /             ( 2 * k)!");
    printf("            /");
    printf("           /");
    printf("           ______");
    printf("             k=0");

}