#include <stdio.h>

int main() {
    float a , b , c , s , m ;
    printf("veuillez saisir la valeur du premier nbr svp   :  ");
    scanf("%f", &a);
    printf("veuillez saisir la valeur du deuxieme nbr svp   :  ");
    scanf("%f", &b);
    printf("veuillez saisir la valeur du troisieme nbr svp   :  ");
    scanf("%f", &c);
    s = a * 2 + b * 3 + c * 5;
    m = s / (2+3+5);

    printf(" la moyenne pondérée = %.2f " ,  m );

    return 0;
}