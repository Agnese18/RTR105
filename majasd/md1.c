#include <stdio.h>
int main() {
    long long int  a, b, result;
    printf("Enter  number 400000: ");
    scanf("%lld", &a);  
 printf("Enter number 100000: ");
    scanf(" %lld", &b); 
    // Calculating product
    result = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %lld\n", result);
    
    return 0;
}
