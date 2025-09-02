#include <stdio.h>

int main() {
    float t;
    printf("veuillez saisir la temperature de l eau en Celsius   :  ");
    scanf("%f", &t);
    if ( t < 0)
    printf("votre Eau est Solide");
    else if (t >= 0 && t<100 )
    printf("votre Eau est liquide");
    else 
    printf("Votre Eau est gaz");
    return 0;
}