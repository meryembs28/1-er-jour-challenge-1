#include <stdio.h>
int main() {
    float longg , larg , s ;
    printf("veuillez saisir la valeur du longeur svp :");
    scanf("%f", &longg);
    printf("veuillez saisir la valeur du largeur svp :");
    scanf("%f", &larg);
    s= longg * larg ;
    printf("la surface = %.2f ", s);
    return 0 ;
}