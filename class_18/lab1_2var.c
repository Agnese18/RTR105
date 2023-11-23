#include<stdio.h>
#include<math.h>
double mans_cosh(double x){
    long double a, S;
    int k=0;

    a =1;
    S=a;

    printf("\n");
    //printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
    printf("a%5d\t%Le   S%5d\t%Le\n", k, a, k, S);

     while(k<500){
        k++;
        a = a*(pow(x, 2))/(4*pow(k, 2)-2*k);
        S=S +a;

        if (k==0 || k>498){
        printf("a%5d\t%Le    S%5d\t%Le\n", k, a, k, S);
        }
        else {}

    }
 return S;
}

void main(){

    double x, y, yy;
    printf ("cosh aprekinasana:\n");
    printf ("ievadi x vērtību: ");
    scanf ("%lf",&x);
    
    
    y= cosh(x);
    printf("cosh(%.2f)=%.2f\n",x, y);
    printf("standarta funkcija cosh - y=cosh(%.2f)=%.2f\n", x,y);
    

    yy= mans_cosh (x);
   
    printf("lietotaja funkcija - y= mans-cosh(%.2f) caur summu : %.2f\n", x, yy);
    
    printf("           500\n");
    printf("          ______\n");
    printf("          \\          \n");
    printf("           \\ \n");
    printf("            \\            (pow(x, 2*k))\n");
    printf("cosh(%.2f)=  >        ________________________\n", x);
    printf("             /             ( 2 * k)!\n");
    printf("            /\n");
    printf("           /\n");
    printf("           ______\n");
    printf("             k=0\n");

    printf(" \n");
    printf("                   2*k  \n");
    printf("                 X  \n");
    printf("reizinātājs:  _________  \n");
    printf("              (2 *k)!     \n");
}