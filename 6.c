#include <stdio.h>

int main() {
    float a , b , s , ss , m , d ;
    printf("veuillez saisir la valeur de a svp   :  ");
    scanf("%f", &a);
    printf("veuillez saisir la valeur de a svp   :  ");
    scanf("%f", &b);
    s = a + b;
    ss = a - b ;
    m = a * b ;
    d = a / b ;
    printf(" la somme de a et b = %.2f \n la soustraction de a et b = %.2f \n la multiplication de a avec b = %.2f \n la division de a sur b = %.2f " , s , ss , m , d);

    return 0;
}